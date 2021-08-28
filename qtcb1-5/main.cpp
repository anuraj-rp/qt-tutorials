#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;
/**
 * @brief main function
 * @param argc argument1
 * @param argv argument2
 * @return int
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello World";

    int age;
    qInfo() << "Enter your age";
    cin >> age;
    string name;
    qInfo() << "Enter you name";
    cin >> name;
    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";

    qInfo() << name.c_str() << "is"  << age << "years old";
    //qFatal("test CRASH !!!!");

    return a.exec();
}
