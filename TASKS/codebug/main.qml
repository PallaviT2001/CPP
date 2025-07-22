import QtQuick
import QtQuick.Controls

Window {
    id: root

    property int count: 0
    width: 200
    height: 300
    visible: true
    title: qsTr("Hello World")

    Label {
        text: root.count
        anchors.left: parent.left
        anchors.leftMargin: 120
    }

    ListView {
        anchors.fill: parent
        model: 100
        delegate: Rectangle {
            required property int index
            width: 100
            height: 50
            color: index % 2 ? "pink" : "gray"
        }

        ScrollBar.vertical: ScrollBar {
            policy: ScrollBar.AlwaysOn
            onPositionChanged: {
                console.log("position changed")
                root.count++
            }
        }
    }
}

/*import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 300
    height: 400
    visible: true

    property int count: 0

    Column {
        Label {
            text: "Position changed: " + count
        }

        ListView {
            id: listView
            model: 100
            width: parent.width
            height: 350

            delegate: Rectangle {
                required property int index
                height: 40
                width: listView.width
                color: index % 2 === 0 ? "lightgray" : "lightblue"
                Text { anchors.centerIn: parent; text: "Item " + index }
            }

            ScrollBar.vertical: ScrollBar {
                policy: ScrollBar.AlwaysOn
                onPositionChanged: {
                    count++
                    console.log("ScrollBar position changed:", position)
                }
            }
        }
    }
}*/
