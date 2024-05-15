//
// Created by Vojago on 2024/5/14.
//
#include <iostream>

const int ARR_SIZE = 8;

int sumArr(int arr[], int n);

[[maybe_unused]] int code_05() {
    using namespace std;
    int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sumArr(cookies, ARR_SIZE);
    cout << "总共吃了" << sum << "个甜饼\n";
    return 0;
}

int sumArr(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; ++i) {
        total = total + arr[i];
    }
    return total;
}
