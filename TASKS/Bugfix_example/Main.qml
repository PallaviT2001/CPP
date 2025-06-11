import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 420
    height: 540
    title: "QML Enums vs Properties"
    color: "#f8f8f8"

    // Define an enum inside a QtObject
    QtObject {
        id: statusEnum
        enum Status {
            Idle,
            Running,
            Error
        }
    }

    // QML Properties
    property int boxSize: 100                // Writable & bindable
    property int status: statusEnum.Idle     // Uses enum value (not bindable)

    Column {
        anchors.centerIn: parent
        spacing: 16

        // ✅ Rectangle using bindable property
        Rectangle {
            width: boxSize
            height: 50
            radius: 8
            color: "#87ceeb"  // Light blue
            border.color: "#333"
            border.width: 1

            Text {
                anchors.centerIn: parent
                text: "Box Width: " + boxSize
                font.pixelSize: 14
                color: "black"
            }
        }

        // ✅ Slider changes the boxSize property
        Slider {
            width: 300
            from: 50
            to: 300
            value: boxSize
            onValueChanged: boxSize = value
        }

        // ❌ Enums used only for display logic
        Text {
            font.pixelSize: 14
            color: "darkblue"
            text: "Status: " +
                (status === statusEnum.Idle ? "🟡 Idle" :
                 status === statusEnum.Running ? "🟢 Running" :
                 "🔴 Error")
        }

        // ❌ Button changes status, but enum values themselves never change
        Button {
            text: "Change Status"
            width: 160
            onClicked: {
                status = (status + 1) % 3
                console.log("Status changed to:", status)
            }
        }

        // Display the actual enum values (constants)
        Text {
            font.pixelSize: 12
            color: "#666"
            text: "Enum values:\nIdle = " + statusEnum.Idle +
                  ", Running = " + statusEnum.Running +
                  ", Error = " + statusEnum.Error
        }

        // 🔍 Final explanation to prove differences
        Rectangle {
            width: 380
            height: 160
            radius: 6
            color: "#ffffff"
            border.color: "#888"
            border.width: 1

            Text {
                anchors.fill: parent
                anchors.margins: 10
                wrapMode: Text.WordWrap
                font.pixelSize: 12
                color: "black"
                text:
                    "✅ 'boxSize' is a QML property:\n" +
                    " - Writable via slider\n" +
                    " - Bindable (used in Rectangle)\n" +
                    " - Emits change notifications\n\n" +

                    "❌ 'statusEnum.Idle' is an enum constant:\n" +
                    " - Cannot change dynamically\n" +
                    " - Not bindable or writable\n" +
                    " - Does not emit change signals"
            }
        }
    }
}


