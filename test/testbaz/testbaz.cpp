#include "gmock/gmock.h"
#include "baz.h"
#include "testbaz.h"

using ::testing::Return;

BazTest::BazTest() {
    // Have qux return true by default
    ON_CALL(mock_baz,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(mock_baz,IsBigEndian()).WillByDefault(Return(false));
}

BazTest::~BazTest() {};

void BazTest::SetUp() {};

void BazTest::TearDown() {};


TEST_F(BazTest, TestMockStatic) {
    Baz baz(mock_baz);
    EXPECT_EQ(baz.qux(), true);
    EXPECT_EQ(baz.IsBigEndian(), false);
}


class MockBaz2 {
public:
    MOCK_METHOD(bool, IsBigEndian2, (), (const));
};

TEST(BazTest2, IsBigEndian2Test) {
    MockBaz2 mock_baz;
    EXPECT_CALL(mock_baz, IsBigEndian2())
        .Times(1)
        .WillOnce(testing::Return(true));

    // Call the function and check the result
    bool result = mock_baz.IsBigEndian2();
    EXPECT_TRUE(result);
}