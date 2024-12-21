#include "../exercise.h"

// READ: 有 cv 限定符的成员函数 <https://zh.cppreference.com/w/cpp/language/member_functions>

struct Fibonacci {
    constexpr Fibonacci(const int (&arr)[11]) : numbers{arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9], arr[10]} {}

    // TODO: 修改方法签名和实现，使测试通过
    constexpr int get(int i) const{
        return numbers[i];
    }
private:
    int numbers[11];
};

int main(int argc, char **argv) {
    Fibonacci constexpr FIB{{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55}};
    ASSERT(FIB.get(10) == 55, "fibonacci(10) should be 55");
    std::cout << "fibonacci(10) = " << FIB.get(10) << std::endl;
    return 0;
}
