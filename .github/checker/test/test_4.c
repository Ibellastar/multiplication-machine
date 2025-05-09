#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_4(void) {
    TEST_ASSERT_EQUAL_INT(6, multiply(-3, -2));
    TEST_ASSERT_EQUAL_INT(4, multiply(-2, -2));
    TEST_ASSERT_EQUAL_INT(2, multiply(-1, -2));
    TEST_ASSERT_EQUAL_INT(14, multiply(-2, -7));
}