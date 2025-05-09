#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_1(void) {
    TEST_ASSERT_EQUAL_INT(3, multiply(3, 1));
    TEST_ASSERT_EQUAL_INT(2, multiply(2, 1));
    TEST_ASSERT_EQUAL_INT(4, multiply(1, 4));
    TEST_ASSERT_EQUAL_INT(7, multiply(1, 7));
}