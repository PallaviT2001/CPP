import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    Rectangle{
        id:rect
        width:186
        height: 101
        color: "red"
    }
    Rectangle{
        id:rect1
        width:186
        height: 101
        color: "blue"
        anchors.left: rect.right
        anchors.top: rect.bottom
    }
    Rectangle{
        id:rect2
        width:186
        height: 101
        color: "green"
        anchors.left: rect1.right
        anchors.top: rect1.bottom
    }
    Rectangle{
        id:rect3
        width:186
        height: 101
        color: "pink"
        anchors.left: rect2.right
        anchors.top: rect2.bottom
    }
    Rectangle
    {
        id:rect4
        width:186
        height: 101
        color: "maroon"
        anchors.left: rect3.right
        anchors.top: rect3.bottom
    }
    Rectangle
    {
        id:rect5
        width:186
        height: 101
        color: "violet"
        anchors.left: rect4.right
        anchors.top: rect4.bottom
    }
    Rectangle
    {
        id:rect6
        width:186
        height: 101
        color: "purple"
        anchors.left: rect5.right
        anchors.top: rect5.bottom
    }
    Rectangle
    {
        id:rect7
        width:186
        height: 101
        color: "orange"
        anchors.left: rect6.right
        anchors.top: rect6.bottom
    }
    Rectangle
    {
        id:rect8
        width:186
        height: 101
        color: "black"
        anchors.left: rect7.right
        anchors.top: rect7.bottom
    }
    Rectangle
    {
        id:rect9
        width:186
        height: 101
        color: "light green"
        anchors.left: rect8.right
        anchors.top: rect8.bottom
    }

}

