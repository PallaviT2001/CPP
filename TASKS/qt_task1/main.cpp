#include "widget.h"
#include <QApplication>
#include <mybutton.h>
#include <mycheckbox.h>
#include <myradiobutton.h>
#include <mytoolbutton.h>
#include <myspinbox.h>
#include <myscrollbar.h>
#include <mymenubar.h>
#include <mystatusbar.h>
#include <QPushButton>
#include <QCheckBox>
#include <QMenuBar>
#include <QRadioButton>
#include <QScrollBar>
#include <QSpinBox>
#include <QStatusBar>
#include <QToolButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QEvent *e;
    QPaintEvent *event;
    Widget w;
    w.show();

    /*MyButton button;
    button.event(e);
    button.paintEvent(event);


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

    MyMenuBar menubar;
    menubar.event(e);
    menubar.paintEvent(event);


    MyStatusBar statusbar;
    statusbar.event(e);
    statusbar.paintEvent(event);*/

    /*MyButton button;
    button.show();

    Mycheckbox checkbox;
    checkbox.show();

    MyRadioButton radiobutton;
    radiobutton.show();

    MyToolButton toolbutton;
    toolbutton.show();

    MySpinBox spinbox;
    spinbox.show();

    MyScrollBar scrollbar;
    scrollbar.show();

    MyMenuBar menubar;
    menubar.show();

    MyStatusBar statusbar;
    statusbar.show();*/

    QPushButton button1;
    button1.show();

    QCheckBox checkbox1;
    checkbox1.show();

    QMenuBar menubar1;
    menubar1.show();

    QRadioButton radiobutton1;
    radiobutton1.show();

    QScrollBar scrollbar1;
    scrollbar1.show();

    QSpinBox spinbox1;
    spinbox1.show();

    QStatusBar statusbar1;
    statusbar1.show();

    QToolButton toolbutton1;
    toolbutton1.show();
    return a.exec();
}
