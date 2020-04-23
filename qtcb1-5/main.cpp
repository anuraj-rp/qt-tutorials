#include <QCoreApplication>
#include <QDebug>


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

    return a.exec();
}
