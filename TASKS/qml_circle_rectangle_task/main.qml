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
            color: "black"
            radius: width / 2
            anchors.verticalCenter: parent.top
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Rectangle {
            id: circle3
            width: 200
            height: 200
            color: "green"
            radius: width / 2
            anchors.verticalCenter: parent.top
            anchors.horizontalCenter: parent.right
        }

        Rectangle {
            id: circle4
            width: 200
            height: 200
            color: "green"
            radius: width / 2
            anchors.verticalCenter: parent.bottom
            anchors.horizontalCenter: parent.left
        }

        Rectangle {
            id: circle5
            width: 200
            height: 200
            color: "green"
            radius: width / 2
            anchors.verticalCenter: parent.bottom
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Rectangle {
            id: circle6
            width: 200
            height: 200
            color: "green"
            radius: width / 2
            anchors.verticalCenter: parent.bottom
            anchors.horizontalCenter: parent.right
        }










    }
}

        /*Rectangle {
            id: circle1
            width: 100
            height: 100
            color: "black"
            radius: width / 2
            //anchors.centerIn: parent.top
            //anchors.centerIn: parent.horizontalCenter
            anchors.verticalCenter: parent.top
            anchors.horizontalCenter: parent.left
        }
        Rectangle {
            id: circle2
            width: 200
            height: 100
            color: "black"
            radius: 180
            //anchors.centerIn: parent.top
            //anchors.centerIn: parent.horizontalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.top

        }
        Rectangle {
            id: circle3
            width: 100
            height: 100
            color: "black"
            radius: width / 2
            //anchors.centerIn: parent.top
            //anchors.centerIn: parent.horizontalCenter
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.bottom
        }*/
