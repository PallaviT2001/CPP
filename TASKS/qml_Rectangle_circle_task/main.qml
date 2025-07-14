import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Rectangle")

    Rectangle {
        id: rect1
        width: 600
        height: 400
        color: "red"
        anchors.centerIn: parent

        Rectangle {
            id: circle1
            width: 200
            height: 200
            color: "blue"
            radius: width / 2
            anchors.verticalCenter: parent.top
            anchors.horizontalCenter: parent.left
        }
        Rectangle {
            id: circle2
            width: 200
            height: 200
            color: "pink"
            radius: width / 2
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.top
        }
        Rectangle {
            id: circle3
            width: 200
            height: 200
            color: "violet"
            radius: width / 2
            anchors.left: parent.horizontalCenter
            anchors.top:  parent.top

        }
        Rectangle {
            id: circle4
            width: 200
            height: 200
            color: "green"
            radius: width / 2
            anchors.top: parent.top
            anchors.horizontalCenter: parent.right

        }
        Rectangle {
            id: circle5
            width: 200
            height: 200
            color: "yellow"
            radius: width / 2
            anchors.right: parent.right
            anchors.bottom: parent.bottom

        }
        Rectangle {
            id: circle6
            width: 200
            height: 200
            color: "black"
            radius: width / 2
            anchors.top: parent.bottom
            anchors.horizontalCenter: parent.right
        }
    }
}

