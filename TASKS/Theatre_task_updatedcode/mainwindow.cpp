#include "mainwindow.h"
#include <QWidget>
#include <QMessageBox>
#include <QDate>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), manager(new TheaterManager()), calendar(new Calendar(manager))
{
    setupUI();
}

MainWindow::~MainWindow() {
    delete manager;
    delete calendar;
}

void MainWindow::setupUI()
{
    // Create buttons
    prevMonthButton = new QPushButton("Previous Month", this);
    nextMonthButton = new QPushButton("Next Month", this);
    showCalendarButton = new QPushButton("Show Calendar", this);
    bookTheatreButton = new QPushButton("Book Theatre", this);
    checkBookingsButton = new QPushButton("Check Bookings", this);

    // Create labels
    calendarLabel = new QLabel("Calendar will appear here", this);
    statusLabel = new QLabel("Status: Ready", this);

    // Create input fields
    dateInput = new QLineEdit(this);
    dateInput->setPlaceholderText("Enter date (DD-MM-YYYY)");

    theatreIdInput = new QLineEdit(this);
    theatreIdInput->setPlaceholderText("Enter Theatre ID");

    // Set geometry for buttons and labels
    prevMonthButton->setGeometry(30, 30, 120, 40);
    nextMonthButton->setGeometry(160, 30, 120, 40);
    showCalendarButton->setGeometry(90, 80, 150, 40);
    bookTheatreButton->setGeometry(90, 130, 150, 40);
    checkBookingsButton->setGeometry(90, 180, 150, 40);
    calendarLabel->setGeometry(50, 230, 300, 200);
    statusLabel->setGeometry(50, 450, 300, 30);

    // Connect buttons to slots
    connect(prevMonthButton, &QPushButton::clicked, this, &MainWindow::onPrevMonthClicked);
    connect(nextMonthButton, &QPushButton::clicked, this, &MainWindow::onNextMonthClicked);
    connect(showCalendarButton, &QPushButton::clicked, this, &MainWindow::onShowCalendarClicked);
    connect(bookTheatreButton, &QPushButton::clicked, this, &MainWindow::onBookTheatreClicked);
    connect(checkBookingsButton, &QPushButton::clicked, this, &MainWindow::onCheckBookingsClicked);

    updateCalendarDisplay(); // Show initial calendar
}

void MainWindow::updateCalendarDisplay() {
    calendarLabel->clear();
    calendar->showCalendar();
    QString calendarText = "Calendar:\n" + QString::fromStdString(calendar->getCalendarDisplay());
    calendarLabel->setText(calendarText);
}

void MainWindow::onPrevMonthClicked()
{
    calendar->prevMonth();
    updateCalendarDisplay();
}

void MainWindow::onNextMonthClicked()
{
    calendar->nextMonth();
    updateCalendarDisplay();
}

void MainWindow::onShowCalendarClicked()
{
    updateCalendarDisplay();
}

void MainWindow::onBookTheatreClicked()
{
    QString dateStr = dateInput->text();
    QString theatreIdStr = theatreIdInput->text();

    if (dateStr.isEmpty() || theatreIdStr.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in both date and theatre ID.");
        return;
    }

    if (!manager->isAvailable(dateStr.toStdString(), theatreIdStr.toStdString())) {
        QMessageBox::warning(this, "Booking Error", "Theatre already booked for the selected date.");
        return;
    }

    manager->bookTheater(dateStr.toStdString(), theatreIdStr.toStdString());
    statusLabel->setText("Booking successful!");
}

void MainWindow::onCheckBookingsClicked()
{
    QString dateStr = dateInput->text();

    if (dateStr.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a date.");
        return;
    }

    auto bookedTheatres = manager->getBookedTheatres(dateStr.toStdString());
    if (bookedTheatres.empty()) {
        QMessageBox::information(this, "No Bookings", "No theatres booked for the selected date.");
    } else {
        QString bookedList = "Booked Theatres: \n";
        for (const auto& id : bookedTheatres) {
            bookedList += "Theatre ID: " + QString::fromStdString(id) + "\n";
        }
        QMessageBox::information(this, "Bookings on " + dateStr, bookedList);
    }
}
