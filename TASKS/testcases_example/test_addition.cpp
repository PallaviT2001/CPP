#include <QtTest/QtTest>
#include "addition.h"

class TestAddition : public QObject {
    Q_OBJECT

private slots:
    void testPositiveNumbers();
    void testNegativeNumbers();
    void testZero();
};

void TestAddition::testPositiveNumbers() {
    QCOMPARE(add(2, 3), 5);
}

void TestAddition::testNegativeNumbers() {
    QCOMPARE(add(-2, -3), -5);

}

void TestAddition::testZero() {
    QCOMPARE(add(0, 0), 0);

}

QTEST_MAIN(TestAddition)
#include "test_addition.moc"
