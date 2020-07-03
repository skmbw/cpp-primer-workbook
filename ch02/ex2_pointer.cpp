//
// Created by yinlei on 2020/7/3.
//

#include <iostream>
using namespace std;

/**
 * 指针相关的练习。
 *
 * 指针是一个对象。
 * 指针指向其他对象的地址。
 * 指针的类型要和它所指向对象的类型匹配。
 * 指针在其声明周期内，可以指向不同的对象。
 *
 * @return
 */
int main() {
    int i = 1;
    double d = 1.2;
    // C++代码格式自由，*和变量名之间可以有空格。
    int *intPointer = &i;

    // 这三种都是定义空指针的，推荐第一种
    double *nullPointer1 = nullptr;
    double *nullPointer2 = NULL;
    double *nullPointer3 = 0;

    // 赋值永远改变的是等号左侧的对象的值，这样就容易区分改变的是指针的值，还是指针指向对象的值

    // intPointer是一个指针，要使用它所指向的值，必须使用解引用符（*）来获得它所指向的对象
    // intPointer = 2;
    *intPointer = 2; // 实际上为intPointer指向的对象i赋值

    cout << i << " " << *intPointer << endl;

    // 指向指针的指针
    int **intPPointer = &intPointer;
    // 解引用两次才能获得最后的值
    cout << **intPPointer << " " << endl;

    return 0;
}