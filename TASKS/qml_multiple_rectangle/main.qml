import QtQuick
import QtQuick.Window
import QtQuick.Controls

Window {
    width: 400
    height: 500
    visible: true
    title: qsTr("Updated Layout with More Rectangles")

    Rectangle {
        anchors.fill: parent
        color: "white"                      // Main background
        border.color: "black"
        border.width: 2

        // Top-left big rectangle
        Rectangle {
            x: 20; y: 20
            width: 150; height: 100
            color: "lightgray"
            border.color: "black"
            border.width: 1
        }

        // Top-right box with 2 small rectangles inside
        Rectangle {
            x: 200; y: 20
            width: 150; height: 100
            color: "whitesmoke"
            border.color: "black"
            border.width: 1

            Row {
                spacing: 10
                anchors.centerIn: parent

                Rectangle {
                    width: 40; height: 50
                    color: "lightblue"
                    border.color: "black"
                }

                Rectangle {
                    width: 40; height: 50
                    color: "lightblue"
                    border.color: "black"
                }
            }
        }

        // Bottom full-width box with 4 inner rectangles in 2 rows
        Rectangle {
            x: 20; y: 150
            width: 330; height: 200
            color: "gainsboro"
            border.color: "black"
            border.width: 1

            Column {
                spacing: 20
                anchors.centerIn: parent

                Row {
                    spacing: 20
                    Rectangle {
                        width: 100; height: 40
                        color: "pink"
                        border.color: "black"
                    }
                    Rectangle {
                        width: 100; height: 40
                        color: "pink"
                        border.color: "black"
                    }
                }

                Row {
                    spacing: 20
                    Rectangle {
                        width: 100; height: 40
                        color: "lightgreen"
                        border.color: "black"
                    }
                    Rectangle {
                        width: 100; height: 40
                        color: "lightgreen"
                        border.color: "black"
                    }
                }
            }
        }
    }
}
