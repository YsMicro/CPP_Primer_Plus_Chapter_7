//
// Created by Vojago on 2024/6/10.
//
#include <iostream>

const int SIZE = 8;

int sumArr(const int *begin, const int *end);

[[maybe_unused]] int code_08() {
    using namespace std;
    int cookies[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sumArr(cookies, cookies + SIZE);
    cout << "总共吃了 " << sum << " 块曲奇" << endl;
    sum = sumArr(cookies, cookies + 3);
    cout << "前三个人吃了 " << sum << " 块曲奇。\n";
    sum = sumArr(cookies + 4, cookies + 8);
    cout << "最后四个人吃了 " << sum << " 块曲奇。\n";
    return 0;
}

//返回整数数组的总和
int sumArr(const int *begin, const int *end) {
    const int *pt;
    int total = 0;
    for (pt = begin; pt != end; pt++) {
        total = total + *pt;
    }
    return total;
}
