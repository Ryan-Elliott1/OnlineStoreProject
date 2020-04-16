#include <QtTest>
#include "product.h"

// add necessary includes here

class storetest : public QObject
{
    Q_OBJECT

public:
    storetest();
    ~storetest();

private slots:
    void test_case1();

};

storetest::storetest()
{

}

storetest::~storetest()
{

}

void storetest::test_case1()
{
    Product newProduct("wipes", 4, 25);
    newProduct.memberDiscount();
    double result = newProduct.getPrice();

    QCOMPARE(result, 3.2);
    QVERIFY(result >= 0);
}

QTEST_APPLESS_MAIN(storetest)

#include "tst_storetest.moc"
