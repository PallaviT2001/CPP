#include <QCoreApplication>
#include <QList>
#include <QElapsedTimer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    const int N = 1000000;
    QList<int> list;
    for (int i = 0; i < N; ++i)
        list.append(i);

    volatile int sum = 0;

    QElapsedTimer timer;
    timer.start();

    for (int i = 0; i < N; ++i)
        sum += list[i];

    qint64 timeNs = timer.nsecsElapsed();
    qDebug() << "QList Access Time:" << timeNs / 1000000.0 << "ms";

    return 0;
}
