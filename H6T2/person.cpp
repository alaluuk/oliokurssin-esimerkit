#include "person.h"

Person::Person(QObject *parent)
    : QObject{parent}
{}

void Person::getJsonData()
{
    QString url="https://peatutor.com/api_example/get_test.php";
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    manager=new QNetworkAccessManager(this);

    QNetworkReply *reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this,[reply, this](){
        if(reply->error() != QNetworkReply::NoError){
            qWarning()<<"Verkko virhe:"<<reply->errorString();
        }

        QByteArray response_data = reply->readAll();
        //qDebug()<<"vastaus="<<response_data;
        QJsonDocument jsond_doc=QJsonDocument::fromJson(response_data);
        QJsonArray json_array = jsond_doc.array();

        qDebug()<<"Eka etunimi ja sukunimi";
        qDebug()<<json_array.at(0)["firstname"].toString()
                 <<json_array.at(0)["lastname"].toString();

        reply->deleteLater();
    });

}
