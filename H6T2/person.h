#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

#include<iostream>

using namespace std;

class Person : public QObject
{
    Q_OBJECT

private:
    QNetworkAccessManager *manager;

public:
    explicit Person(QObject *parent = nullptr);
    void getJsonData();

signals:
};

#endif // PERSON_H
