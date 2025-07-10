import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 800
    height: 700
    visible: true
    title: qsTr("QML: basic QML Types")

    property real scrollPercent: 0
    property string buttonMessage: ""
    property real sliderValue: 50
    property real progressValue: 0.6

    Column
    {
        anchors.fill: parent
        spacing: 10

        // Scroll Percentage Label
        Text
        {
            text: "ScrollBar: " + Math.round(scrollPercent) + "%"
            font.pixelSize: 16
            horizontalAlignment: Text.AlignHCenter
            width: parent.width
        }

        ScrollView
        {
            id: scrollView
            Layout.fillWidth: true
            Layout.fillHeight: true
            height: 600
            clip: true

            Column
            {
                id: contentColumn
                width: scrollView.width
                spacing: 20
                padding: 20

                // Rectangle
                Text
                {
                    text: "Rectangle"; font.bold: true
                }
                Rectangle
                {
                    width: 200; height: 50; color: "red"
                    Text
                    {
                        anchors.centerIn: parent; text: "Rectangle"
                    }
                }

                // Item
                Text
                {
                    text: "Item"; font.bold: true
                }
                Item
                {
                    width: 200; height: 50
                    Rectangle
                    {
                        anchors.fill: parent; color: "lightblue"
                        Text
                        {
                            anchors.centerIn: parent; text: "Item Content"
                        }
                    }
                }

                // Button
                Text
                {
                    text: "Button"; font.bold: true
                }
                Button
                {
                    text: "Click Me"
                    width: 200; height: 50
                    onClicked: buttonMessage = "You clicked the button!"
                }

                Text {
                    text: buttonMessage
                    color: "blue"
                    font.pixelSize: 14
                    visible: buttonMessage !== ""
                }

                // TextField
                Text
                {
                    text: "TextField"; font.bold: true
                }
                TextField
                {
                    placeholderText: "Enter something"
                    width: 200; height: 50
                }

                // TextInput
                Text
                {
                    text: "TextInput"; font.bold: true
                }
                Rectangle
                {
                    width: 200; height: 50; color: "white"; border.color: "gray"; border.width: 1
                    TextInput
                    {
                        anchors.fill: parent
                        anchors.margins: 5
                        font.pixelSize: 16
                        text: "Edit me"
                    }
                }

                // Text
                Text
                {
                    text: "Text"; font.bold: true
                }
                Text
                {
                    text: "Display Only Text"
                    font.pixelSize: 16
                    color: "green"
                    width: 200; height: 50
                }

                // TextEdit
                Text
                {
                    text: "TextEdit"; font.bold: true
                }
                TextEdit
                {
                    text: "Multiline editable text"
                    wrapMode: TextEdit.Wrap
                    width: 200; height: 80
                }

                // Image
                Text
                {
                    text: "Image"; font.bold: true
                }
                Image
                {
                    width: 200; height: 100
                    fillMode: Image.PreserveAspectFit
                    Rectangle
                    {
                        anchors.fill: parent
                        color: "transparent"
                        border.width: 1
                        border.color: "gray"
                    }
                }

                // RadioButton
                Text
                {
                    text: "RadioButton"; font.bold: true
                }
                RadioButton
                {
                    text: "Option A"
                    width: 200; height: 50
                }

                // Slider
                Text
                {
                    text: "Slider"; font.bold: true
                }
                Slider
                {
                    from: 0; to: 100
                    value: sliderValue
                    width: 200; height: 50
                    onValueChanged: sliderValue = value
                }

                Text
                {
                    text: "Slider Value: " + Math.round(sliderValue) + "%"
                    font.pixelSize: 14
                }

                // ProgressBar
                Text
                {
                    text: "ProgressBar"; font.bold: true
                }
                ProgressBar
                {
                    value: progressValue
                    width: 200
                    height: 25
                }

                Text
                {
                    text: "Progress: " + Math.round(progressValue * 100) + "%"
                    font.pixelSize: 14
                }
            }

            // Scroll % calculation
            Component.onCompleted:
            {
                scrollView.contentItem.contentYChanged.connect(function()
                {
                    let flick = scrollView.contentItem
                    let percent = (flick.contentY / (flick.contentHeight - flick.height)) * 100
                    scrollPercent = Math.min(Math.max(percent, 0), 100)
                })
            }
        }
    }
}

