import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

Window {
    visible: true
    width: 400
    height: 400
    title: "Simulate stackBefore / stackAfter"

    Rectangle {
        id: root
        anchors.fill: parent
        color: "white"

        // Red rectangle
        Rectangle {
            id: redRect
            width: 150; height: 150
            color: "red"
            x: 100; y: 100
            z: 0 // initially below green
            Text {
                anchors.centerIn: parent
                text: "RED"
                color: "white"
            }
        }

        // Green rectangle
        Rectangle {
            id: greenRect
            width: 150; height: 150
            color: "green"
            x: 130; y: 130
            z: 1 // initially above red
            Text {
                anchors.centerIn: parent
                text: "GREEN"
                color: "white"
            }
        }

        // Buttons to simulate stackAfter and stackBefore
        Column {
            anchors.bottom: parent.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 10
            padding: 10

            Button {
                text: "Simulate stackAfter (Red above Green)"
                //Previous:
                // "Moves the specified sibling item to the index after this item"
                // — which wrongly implies that the sibling moves, not this item.

                //Now:
                // moves the redRect (this item) to render above greenRect (sibling)
                // This mimics calling redRect.stackAfter(greenRect)
                onClicked: redRect.z = greenRect.z + 1
            }

            Button {
                text: "Simulate stackBefore (Red below Green)"
                //"Moves the specified sibling item to the index before this item"
                // — which wrongly implies that the sibling moves, not this item.

                // Simulates stackBefore: moves the redRect (this item) to render below greenRect (sibling)
                // This mimics calling redRect.stackBefore(greenRect)
                onClicked: redRect.z=greenRect.z -1;
            }
        }
    }
}
