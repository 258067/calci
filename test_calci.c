#include "unity_internals.h"
#include"unity.h"
#include"calci.h"
void setUp(void);
void tearDown(void);
void test_div(void)
{
    TEST_ASSERT_EQUAL(1,div(10,10));
    TEST_ASSERT_EQUAL(0,div(10,0));
    TEST_ASSERT_EQUAL(20,sum(10,10));
}
int main()
{
    test_main();
    return 0;
}
int test_main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_div);
    return UNITY_END();
}