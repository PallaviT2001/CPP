#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QPushButton>
#include <QComboBox>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QDate>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onPreviousMonthClicked();
    void onNextMonthClicked();
    void onBookTheatreClicked();
    void onCheckBookingsClicked();
    void onExitClicked();

private:
    QCalendarWidget *calendar;
    QPushButton *prevMonthButton, *nextMonthButton, *bookTheatreButton, *checkBookingsButton, *exitButton;
    QComboBox *theatreComboBox;
    QTextEdit *statusTextEdit;
    QLabel *monthLabel;

    void updateStatus(const QString &status);
    void updateBookingsForCurrentDate();
};

#endif // MAINWINDOW_H
