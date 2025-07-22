#include <QtTest/QtTest>
#include "date.h"

class TestDateCheck : public QObject
{
    Q_OBJECT

private slots:
    void testValidDate();
    void testInvalidDate();
    void testLeapYear();
    void testNonLeapYear();
    void testToString();
    void testIsPast();
};

void TestDateCheck::testValidDate()
{
    Date d(15, 7, 2025);
    QVERIFY(d.isValid());
}

void TestDateCheck::testInvalidDate()
{
    Date d(31, 4, 2025);
    QVERIFY(!d.isValid());
}

void TestDateCheck::testLeapYear()
{
    QVERIFY(Date::isLeap(2024));
}

void TestDateCheck::testNonLeapYear()
{
    QVERIFY(!Date::isLeap(1900));
}

void TestDateCheck::testToString()
{
    Date d(9, 4, 2025);
    QCOMPARE(d.toString(), std::string("09-04-2025"));
}

void TestDateCheck::testIsPast()
{
    Date pastDate(1, 1, 1999);
    QVERIFY(pastDate.isPast());

    Date futureDate(1, 1, 2999);
    QVERIFY(!futureDate.isPast());
}

QTEST_MAIN(TestDateCheck)
#include "tst_date_check.moc"
