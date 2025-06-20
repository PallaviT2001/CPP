import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "Effective ScrollBar Size Test"

    ScrollView {
        id: scrollView
        anchors.fill: parent

        // Content is intentionally large to trigger both scrollbars
        contentItem: Rectangle {
            width: 1000
            height: 1000
            color: "#eef"

            Text {
                anchors.centerIn: parent
                text: "Oversized Content"
            }
        }

        Component.onCompleted: {
            console.log("Effective vertical scroll bar width:", scrollView.effectiveScrollBarWidth)
            console.log("Effective horizontal scroll bar height:", scrollView.effectiveScrollBarHeight)
        }
        onEffectiveScrollBarWidthChanged: console.log("Updated vertical width:", effectiveScrollBarWidth)
        onEffectiveScrollBarHeightChanged: console.log("Updated horizontal height:", effectiveScrollBarHeight)
    }
}
