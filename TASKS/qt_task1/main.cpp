#include "widget.h"
#include <QApplication>
#include <mybutton.h>
#include <mycheckbox.h>
#include <myradiobutton.h>
#include <mytoolbutton.h>
#include <myspinbox.h>
#include <myscrollbar.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QEvent *e;
    QPaintEvent *event;
    Widget w;
    w.show();

    MyButton button;
    button.event(e);
    button.paintEvent(event);
    //button.show();

    Mycheckbox checkbox;
    checkbox.event(e);
    checkbox.paintEvent(event);

    MyRadioButton radiobutton;
    radiobutton.event(e);
    radiobutton.paintEvent(event);

    MyToolButton toolbutton;
    toolbutton.event(e);
    toolbutton.paintEvent(event);

    MySpinBox spinbox;
    spinbox.event(e);
    spinbox.paintEvent(event);

    MyScrollBar scrollbar;
    scrollbar.event(e);
    scrollbar.paintEvent(event);

    return a.exec();
}
