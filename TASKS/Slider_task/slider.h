#ifndef SLIDER_H
#define SLIDER_H
#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider: public QWidget
{
    Q_OBJECT
public:
    explicit Slider(QWidget *parent = nullptr);

private slots:
    void updateValue(int value);

private:
    QSlider *slider;
    QLabel *valueLabel;
};

#endif
