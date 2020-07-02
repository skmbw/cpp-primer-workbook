#include <iostream>

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // 32
    std::cout << u - u2 << std::endl; // 4294967264
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32
    std::cout << i - u << std::endl;  // 0
    std::cout << u - i << std::endl;  // 0

    // 对于无符号的数，赋值一个超出范围的数，那么是取模后的值
    unsigned char cc = -1;
    std::cout << int(cc) << std::endl;

    // 对于有符号的数，赋值一个超出范围的数，那么是未定义的
    signed char cc2 = 256;
    std::cout << cc2 << std::endl;

    return 0;
}
