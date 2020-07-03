//
// Created by yinlei on 2020/7/3.
//
int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.1415926;
    r2 = r1;
    i = r2; // 这两个赋值都是对的，只是发生了自动转型，会丢失精度。
    r1 = d; // 自动转型

    return 0;
}