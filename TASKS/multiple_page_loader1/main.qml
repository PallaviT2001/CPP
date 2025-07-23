import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Page Navigation")



    property int pageIndex: 0
    property var pages: ["page1.qml", "page2.qml", "page3.qml", "page4.qml", "page5.qml"]

    Loader {
        id: pageLoader
        anchors.fill: parent
        source: pages[pageIndex]

        onLoaded: {
            if (item) {
                pageConnections.target = item
            }
        }
    }

    Connections {
        id: pageConnections
        target: null

        onPageNclick: {
            if (pageIndex < pages.length - 1) {
                pageIndex += 1
                pageLoader.source = pages[pageIndex]
            }
        }

        onPagePclick: {
            if (pageIndex > 0) {
                pageIndex -= 1
                pageLoader.source = pages[pageIndex]
            }
        }
    }
}


