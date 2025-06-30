import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    width: 640
    height: 480
    visible: true
    title: manufacturer + " - " + model

    property string manufacturer: "Dell"
    property string model: "Dell U2419H"

    Text {
        anchors.centerIn: parent
        text: manufacturer + " - " + model
        font.pointSize: 20
    }
}
