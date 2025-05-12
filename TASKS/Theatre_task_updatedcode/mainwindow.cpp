#include "mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include <QTextEdit>
#include <QCalendarWidget>
#include <QLabel>
#include <QDate>
#include <QMessageBox>
#include <QApplication>  // Ensure this is included

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Main window setup
    setWindowTitle("Theatre Booking System");

    // Create UI elements
    calendar = new QCalendarWidget(this);
    prevMonthButton = new QPushButton("< Previous Month", this);
    nextMonthButton = new QPushButton("Next Month >", this);
    bookTheatreButton = new QPushButton("Book Theatre", this);
    checkBookingsButton = new QPushButton("Check Bookings", this);
    exitButton = new QPushButton("Exit", this);
    theatreComboBox = new QComboBox(this);
    statusTextEdit = new QTextEdit(this);
    monthLabel = new QLabel("April 2025", this);

    // Add theatre options (dummy data)
    theatreComboBox->addItem("1");
    theatreComboBox->addItem("2");
    theatreComboBox->addItem("3");

    // Layout for buttons and combo box
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QHBoxLayout *topLayout = new QHBoxLayout;

    topLayout->addWidget(prevMonthButton);
    topLayout->addWidget(monthLabel);
    topLayout->addWidget(nextMonthButton);

    mainLayout->addLayout(topLayout);
    mainLayout->addWidget(calendar);
    mainLayout->addWidget(new QLabel("Select Theatre ID:"));
    mainLayout->addWidget(theatreComboBox);
    mainLayout->addWidget(bookTheatreButton);
    mainLayout->addWidget(checkBookingsButton);
    mainLayout->addWidget(exitButton);
    mainLayout->addWidget(new QLabel("Status:"));
    mainLayout->addWidget(statusTextEdit);

    // Set central widget
    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    // Connect button actions to slots
    connect(prevMonthButton, &QPushButton::clicked, this, &MainWindow::onPreviousMonthClicked);
    connect(nextMonthButton, &QPushButton::clicked, this, &MainWindow::onNextMonthClicked);
    connect(bookTheatreButton, &QPushButton::clicked, this, &MainWindow::onBookTheatreClicked);
    connect(checkBookingsButton, &QPushButton::clicked, this, &MainWindow::onCheckBookingsClicked);
    connect(exitButton, &QPushButton::clicked, this, &MainWindow::onExitClicked);
}

MainWindow::~MainWindow() {}

void MainWindow::onPreviousMonthClicked()
{
    QDate currentMonth = calendar->selectedDate();
    calendar->setSelectedDate(currentMonth.addMonths(-1));

    // Update month label
    monthLabel->setText(calendar->selectedDate().toString("MMMM yyyy"));
}

void MainWindow::onNextMonthClicked()
{
    QDate currentMonth = calendar->selectedDate();
    calendar->setSelectedDate(currentMonth.addMonths(1));

    // Update month label
    monthLabel->setText(calendar->selectedDate().toString("MMMM yyyy"));
}

void MainWindow::onBookTheatreClicked()
{
    QDate selectedDate = calendar->selectedDate();
    int theatreId = theatreComboBox->currentText().toInt();

    // Dummy booking logic
    QString status = QString("Theatre %1 booked successfully for %2").arg(theatreId).arg(selectedDate.toString("dd-MM-yyyy"));
    updateStatus(status);
}

void MainWindow::onCheckBookingsClicked()
{
    QDate selectedDate = calendar->selectedDate();
    QString status = QString("Bookings for %1: Theatre 1, Theatre 3").arg(selectedDate.toString("dd-MM-yyyy"));
    updateStatus(status);
}

void MainWindow::onExitClicked()
{
    QApplication::quit();  // Quit the application
}

void MainWindow::updateStatus(const QString &status)
{
    statusTextEdit->setText(status);
}

void MainWindow::updateBookingsForCurrentDate()
{
    // Dummy function to update bookings (you can add actual data fetching here)
    QDate selectedDate = calendar->selectedDate();
    QString status = QString("Bookings for %1: Theatre 1, Theatre 2").arg(selectedDate.toString("dd-MM-yyyy"));
    updateStatus(status);
}
