#include <QApplication>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget window;
    QVBoxLayout layout(&window);
    QLineEdit *edit = new QLineEdit;
    layout.addWidget(edit);
    window.show();
    return app.exec();
}
