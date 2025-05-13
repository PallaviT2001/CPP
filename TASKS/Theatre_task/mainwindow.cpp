#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDate>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), currentDate(QDate::currentDate())
{
    setupUI();
    updateCalendar();
}

MainWindow::~MainWindow() {}

void MainWindow::setupUI()
{
    centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    QHBoxLayout *navLayout = new QHBoxLayout();
    prevMonthButton = new QPushButton("< Previous", this);
    nextMonthButton = new QPushButton("Next >", this);
    connect(prevMonthButton, &QPushButton::clicked, this, &MainWindow::showPreviousMonth);
    connect(nextMonthButton, &QPushButton::clicked, this, &MainWindow::showNextMonth);
    navLayout->addWidget(prevMonthButton);
    navLayout->addStretch();
    navLayout->addWidget(nextMonthButton);

    mainLayout->addLayout(navLayout);

    // Calendar grid
    gridLayout = new QGridLayout();
    QFont font;
    font.setBold(true);

    QStringList weekDays = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    for (int i = 0; i < 7; ++i) {
        headerButtons[i] = new QPushButton(weekDays[i]);
        headerButtons[i]->setEnabled(false);
        headerButtons[i]->setFont(font);
        gridLayout->addWidget(headerButtons[i], 0, i);
    }

    for (int row = 0; row < 6; ++row) {
        for (int col = 0; col < 7; ++col) {
            dayButtons[row][col] = new QPushButton();
            dayButtons[row][col]->setFixedSize(60, 40);
            dayButtons[row][col]->setEnabled(false);
            gridLayout->addWidget(dayButtons[row][col], row + 1, col);
        }
    }

    mainLayout->addLayout(gridLayout);
}

void MainWindow::updateCalendar()
{
    clearCalendar();

    QDate firstDay(currentDate.year(), currentDate.month(), 1);
    int startDay = firstDay.dayOfWeek() % 7;  // Qt uses Monday as 1. We want Sunday as 0.
    int daysInMonth = firstDay.daysInMonth();

    QDate today = QDate::currentDate();

    int day = 1;
    for (int i = 0; i < 6 && day <= daysInMonth; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i == 0 && j < startDay) continue;
            if (day > daysInMonth) break;

            QPushButton *btn = dayButtons[i][j];
            btn->setText(QString::number(day));
            btn->setEnabled(true);

            if (today.year() == currentDate.year() &&
                today.month() == currentDate.month() &&
                today.day() == day)
            {
                btn->setStyleSheet("background-color: lightblue; font-weight: bold;");
            } else {
                btn->setStyleSheet("");
            }

            ++day;
        }
    }

    // Set window title to Month Year
    this->setWindowTitle(currentDate.toString("MMMM yyyy"));
}

void MainWindow::clearCalendar()
{
    for (int row = 0; row < 6; ++row) {
        for (int col = 0; col < 7; ++col) {
            dayButtons[row][col]->setText("");
            dayButtons[row][col]->setEnabled(false);
            dayButtons[row][col]->setStyleSheet("");
        }
    }
}

void MainWindow::showPreviousMonth()
{
    currentDate = currentDate.addMonths(-1);
    updateCalendar();
}

void MainWindow::showNextMonth()
{
    currentDate = currentDate.addMonths(1);
    updateCalendar();
}
