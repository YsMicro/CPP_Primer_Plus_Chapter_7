//
// Created by Vojago on 2024/5/12.
//
#include <iostream>

void simple();//函数原型

[[maybe_unused]] int code_01() {
    using namespace std;
    cout << "code_01() 将调用 simple() 函数:\n";
    simple();
    cout << "code_01() 以 simple() 函数结束:\n";
//    cin.get();
    return 0;
}

//函数定义
void simple() {
    using namespace std;
    cout << "我就是 simple() 函数。\n";
}
