import QtQuick
import QtQuick.Controls

Rectangle {
    anchors.fill: parent
    color: "red"

    signal pageNclick()
    signal pagePclick()
    Component.onCompleted: console.log("Page1 loaded")
    Component.onDestruction: console.log("Page1 destroyed")

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
