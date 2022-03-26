#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKitWidgets/QWebEngine>
#include <QUrl>
#include <QDebug>

namespace QML {
class Mainwindow;
}


class mainwindow : public: mainwindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();

private:
    QML:MainWindow *qml;

private slots:
    void slotEnter(); //Слот для нажатия Enter
    void slotLinkClicked(QUrl url); //Слот для нажатия пл ссылке на странице
};

#endif // MAINWINDOW_H
