import QtQuick 2.4

Item {
    width: 400
    height: 400
    opacity: 1

    Rectangle {
        id: rectangle
        x: -14
        y: 0
        width: 445
        height: 400
        color: "#ffffff"

        Item {
            id: element
            x: 98
            y: 100
            width: 239
            height: 200
        }

        Image {
            id: image
            x: 168
            y: 100
            width: 100
            height: 100
            source: "../../Снимок экрана 2022-03-26 в 15.51.36.png"
            fillMode: Image.PreserveAspectFit

            TextInput {
                id: textInput
                x: -10
                y: 87
                width: 150
                height: 20
                opacity: 1
                visible: true
                color: "#999999"
                text: qsTr("Поиск.. ")
                font.pixelSize: 12
                verticalAlignment: Text.AlignVCenter
                persistentSelection: false
            }
        }
    }
}
