#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}


/*import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 420
    height: 500
    title: "QML Enum vs Property Demo"

    property int idle:0
    property int running: 1
    property int error: 2

    property int boxSize: 100
    property int status: idle

Component.onCompleted: {
    idle++;
    console.log(idle+"==========idle")
}

Column {
        anchors.centerIn: parent
        spacing: 20

       //1.QML Properties supports Binding.
        Rectangle {
            width: boxSize
            height: 50
            color: "lightblue"
            radius: 5

            Text {
                anchors.centerIn: parent
                text: "Width (binds): " + boxSize
            }
        }

        //Slider for boxSize
        Slider {
            from: 50
            to: 300
            value: boxSize
            onValueChanged: boxSize = value
        }
        Text {
            text: "Current Status: " +
                (status === idle ? "Idle" :
                 status === running ? "Running" :
                 "Error")
        }
        Button {
            text: "Next Status"
            onClicked: {
                status = (status + 1) % 3
                console.log("New Status:", status)
            }
        }

        Text {
            text: "Enum-like constants: idle=" + idle +
                  ", running=" + running + ", error=" + error
        }


        Text {
            wrapMode: Text.WordWrap
            width: 380
            font.pixelSize: 12
            text:
                " 1.boxSize is a property:\n" +
                " - Bindable (used in Rectangle)\n" +
                " - Writable (via Slider)\n" +
                " - Emits change notifications\n\n" +

                "2. status uses constants:\n" +
                " - Not bindable\n" +
                " - Not writable (fixed values)\n" +
                " - No change signals\n"
        }
    }
}*/


