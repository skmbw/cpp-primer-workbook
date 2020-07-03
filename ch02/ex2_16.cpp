//
// Created by yinlei on 2020/7/3.
//

#include <iostream>

/**
 * 包含 2.17的练习题
 * @return 错误代码
 */
int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.1415926;
    r2 = r1;
    i = r2; // 这两个赋值都是对的，只是发生了自动转型，会丢失精度。
    r1 = d; // 自动转型

    i = 5;
    r1 = 10;
    // r1是i的别名，所以现在i是10，r1也是10
    std::cout << i << " " << r1 << std::endl;

    return 0;
}