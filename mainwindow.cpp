#include "mainwindow.h"
#include "qml_mainwindow.h"

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mainwindow)
{
   qml->setupUi(this);

    //Ручная обработка клика по сслыке
    qml->webEngine->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);

    //Нажатие "Enter" в поле lineEdit
    connect(qml->lineEdit, &QLineEdit::returnPressed, this, &mainwindow::slotEnter);
    //Cигнал клика по ссылке обработчику
    connect(qml->webEngine, &QWebEngine::linkClicked, this, &mainwindow::slotLinkClicked);
}

mainwindow::~mainwindow()
{
    delete qml;
}

void mainwindow::slotLinkClicked(QUrl url)
{
    //при клике по ссылке адрес в поле lineEdit
    qml->lineEdit->setText(url.toString());
    qml->webEngine->load(url); //загрузка страницы по ссылке
}
