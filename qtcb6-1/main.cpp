#include <QCoreApplication>

#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter you age";
    cin >> age;
    if(age == 0) qFatal("You did not enter a valid age");

    qInfo() << "You entered " << age;

    return a.exec();
}
