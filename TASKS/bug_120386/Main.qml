import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "Test ShellSurface.windowType Enum"

    QtObject {
        id: shellSurface
        readonly property int toplevel: 0
        readonly property int popup: 1
        readonly property int maximized: 2
        readonly property int fullscreen: 3
    }

    property int windowType: shellSurface.toplevel

    Column {
        anchors.centerIn: parent
        spacing: 10

        Text {
            text: {
                switch (windowType) {
                case shellSurface.toplevel: return "Toplevel Window";
                case shellSurface.popup: return "Popup Window";
                case shellSurface.maximized: return "Maximized Window";
                case shellSurface.fullscreen: return "Fullscreen Window";
                default: return "Unknown";
                }
            }
            font.pixelSize: 16
        }

        Button { text: "Toplevel"; onClicked: windowType = shellSurface.toplevel }
        Button { text: "Popup"; onClicked: windowType = shellSurface.popup }
        Button { text: "Maximized"; onClicked: windowType = shellSurface.maximized }
        Button { text: "Fullscreen"; onClicked: windowType = shellSurface.fullscreen }
    }
}



