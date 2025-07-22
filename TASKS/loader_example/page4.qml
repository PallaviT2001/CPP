import QtQuick
import QtQuick.Controls

Rectangle {
    anchors.fill: parent
    color: "pink"

    signal pageNclick()
    signal pagePclick()
    Component.onCompleted: console.log("Page4 loaded")
    Component.onDestruction: console.log("Page4 destroyed")

    Button {
        text: "Previous"
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.verticalCenter: parent.verticalCenter
        onClicked: pagePclick()
    }

    Button {
        text: "Next"
        anchors.right: parent.right
        anchors.rightMargin: 10
        anchors.verticalCenter: parent.verticalCenter
        onClicked: pageNclick()
    }
}
