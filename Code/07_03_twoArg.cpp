//
// Created by Vojago on 2024/5/14.
//
#include <iostream>

using namespace std;

void n_chars(char, int);

[[maybe_unused]] int code_03() {
    int times;
    char ch;

    cout << "输入一个字符:";
    cin >> ch;
    while (ch != 'q') {
        cout << "输入一个整数:";
        cin >> times;
        n_chars(ch, times);
        cout << "\n再次输入一个字符或按下\"q\"键来退出:";
        cin >> ch;
    }
    cout << "Times 的值为:" << times << ".\n";
    cout << "再见\n";
    return 0;
}

void n_chars(char c, int n) {
    while (n-- > 0)
        cout << c;
}
