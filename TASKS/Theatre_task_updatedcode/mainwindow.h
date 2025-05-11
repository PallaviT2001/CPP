#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "date.h"
#include "TheatreManager.h"
#include "calender.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onPrevMonthClicked();
    void onNextMonthClicked();
    void onShowCalendarClicked();
    void onBookTheatreClicked();
    void onCheckBookingsClicked();

private:
    void setupUI();
    void updateCalendarDisplay();

    QPushButton *prevMonthButton;
    QPushButton *nextMonthButton;
    QPushButton *showCalendarButton;
    QPushButton *bookTheatreButton;
    QPushButton *checkBookingsButton;
    QLabel *calendarLabel;
    QLabel *statusLabel;
    QLineEdit *dateInput;
    QLineEdit *theatreIdInput;

    TheaterManager *manager;
    Calendar *calendar;
};

#endif // MAINWINDOW_H


