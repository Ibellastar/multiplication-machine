#include "unity.h"
#include "multiplier.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_3(void) {
    TEST_ASSERT_EQUAL_INT(0, multiply(0, 2));
    TEST_ASSERT_EQUAL_INT(3, multiply(1, 3));
    TEST_ASSERT_EQUAL_INT(0, multiply(0, -4));
    TEST_ASSERT_EQUAL_INT(0, multiply(0, -5));
}