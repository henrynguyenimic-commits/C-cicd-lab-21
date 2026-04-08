#include "unity.h"
#include "../src/utils.h"

void setUp(void) {}
void tearDown(void) {}

void test_factorial_positive(void) {
    TEST_ASSERT_EQUAL_INT(120, factorial(5));
    TEST_ASSERT_EQUAL_INT(1, factorial(0));
}

void test_factorial_negative(void) {
    TEST_ASSERT_EQUAL_INT(-1, factorial(-5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_factorial_positive);
    RUN_TEST(test_factorial_negative);
    return UNITY_END();
}
