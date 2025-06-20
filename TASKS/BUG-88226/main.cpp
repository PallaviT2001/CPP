#include <QCoreApplication>
#include <QVector>
#include <QList>
#include <QElapsedTimer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    const int N = 10000000;
    QVector<int> vector;
    vector.reserve(N);
    for (int i = 0; i < N; ++i)
        vector.append(i);

    QList<int> list;
    for (int i = 0; i < N; ++i)
        list.append(i);

    int sum = 0;
    QElapsedTimer timer;

    timer.start();
    for (int i = 0; i < N; ++i)
        sum += vector[i];
    qint64 vectorTime = timer.nsecsElapsed();

    sum = 0;

    timer.start();
    for (int i = 0; i < N; ++i)
        sum += list[i];
    qint64 listTime = timer.nsecsElapsed();

    qDebug() << "QVector Access Time:" << vectorTime / 1e6 << "ms";
    qDebug() << "QList Access Time  :" << listTime / 1e6 << "ms";

    return 0;
}
