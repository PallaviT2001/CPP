// main.cpp
#include <QCoreApplication>
#include <QTest>
#include "test_addition.h"  // Include header, not cpp

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);
    TestAddition test;
    return QTest::qExec(&test, argc, argv);
}
