//
// Created by Vojago on 2024/5/14.
//
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

[[maybe_unused]] int code_04() {
    using namespace std;
    double total, choices;
    cout << "输入游戏中选择的总数\n"
            "卡片和允许的挑选次数:\n";
    while ((cin >> total >> choices) && choices <= total) {
        cout << "你有 "
             << probability(total, choices)
             << " 分之一的机会获胜。\n";
        cout << "再输入两个数(输入\"q\"退出):";
    }
    cout << "再见\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p;
    }
    return result;
}
