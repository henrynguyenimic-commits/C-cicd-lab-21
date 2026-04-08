#include "utils.h"

// Sử dụng long long để chứa được số lớn hơn (đến 20!)
unsigned long long factorial(int n) {
    if (n < 0) return 0; // Trả về 0 hoặc một mã lỗi cụ thể theo quy ước của bạn
    
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
