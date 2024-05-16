//
// Created by Vojago on 2024/5/15.
//
#include <iostream>

const int ARR_SIZE = 8;

int sumArr(int arr[], int n);

[[maybe_unused]] int code_06() {
    int cookies[ARR_SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = 数组地址，";
    std::cout << sizeof cookies << " = 数组大小\n";
    int sum = sumArr(cookies, ARR_SIZE);
    std::cout << "总共有 " << sum << " 块甜饼被吃" << std::endl;
    sum = sumArr(cookies, 3);
    std::cout << "前三位食客吃了 " << sum << " 块甜饼。\n";
    sum = sumArr(cookies + 4, 4);
    std::cout << "后四位食客吃了 " << sum << " 块甜饼。\n";
    return 0;
}

int sumArr(int arr[], int n) {
    int total = 0;
    std::cout << arr << " = 数组，";
    std::cout << sizeof(arr) << " = 数组大小\n";
    for (int i = 0; i < n; ++i)
        total = total + arr[i];
    return total;
}
