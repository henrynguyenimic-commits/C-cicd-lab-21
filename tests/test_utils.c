#include "unity.h"
#include "../src/utils.h"

// Hàm thiết lập trước mỗi bài test (bắt buộc có trong Unity)
void setUp(void) {
    // Có thể để trống nếu không cần khởi tạo gì đặc biệt
}

// Hàm dọn dẹp sau mỗi bài test (bắt buộc có trong Unity)
void tearDown(void) {
    // Có thể để trống
}

// Bài test kiểm tra các trường hợp số dương và số 0
void test_factorial_positive(void) {
    // 5! = 120
    TEST_ASSERT_EQUAL_UINT64(120, factorial(5));
    
    // 0! = 1
    TEST_ASSERT_EQUAL_UINT64(1, factorial(0));
    
    // 10! = 3,628,800
    TEST_ASSERT_EQUAL_UINT64(3628800, factorial(10));
}

// Bài test kiểm tra trường hợp số âm
void test_factorial_negative(void) {
    // Theo logic trong utils.c, số âm trả về 0
    TEST_ASSERT_EQUAL_UINT64(0, factorial(-5));
}

int main(void) {
    UNITY_BEGIN(); // Bắt đầu phiên kiểm thử
    
    RUN_TEST(test_factorial_positive);
    RUN_TEST(test_factorial_negative);
    
    return UNITY_END(); // Kết thúc và trả về kết quả cho GitHub Actions
}
