#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGridLayout>
#include <QDate>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showPreviousMonth();
    void showNextMonth();

private:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *dayButtons[6][7];
    QPushButton *headerButtons[7];
    QPushButton *prevMonthButton;
    QPushButton *nextMonthButton;

    QDate currentDate;

    void setupUI();
    void updateCalendar();
    void clearCalendar();
};

#endif
