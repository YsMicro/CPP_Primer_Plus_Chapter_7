//
// Created by Vojago on 2024/5/16.
//
#include <iostream>

const int MAX = 5;

int fillArray(double arr[], int limit);

void showArray(const double arr[], int n);

void revalue(double r, double arr[], int n);

[[maybe_unused]] int code_07() {
    using namespace std;
    double properties[MAX];

    int size = fillArray(properties, MAX);
    showArray(properties, size);
    if (size > 0) {
        cout << "输入重估系数：";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "无效输入，请在输入一个值：";
        }
        revalue(factor, properties, size);
        showArray(properties, size);
    }
    cout << "完成。\n";
    cin.get();
//    cin.get();
    return 0;
}

int fillArray(double arr[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; ++i) {
        cout << "输入值 #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "无效输入，input 程序终止。\n";
            break;
        } else if (temp < 0)
            break;
        arr[i] = temp;
    }
    return i;
}

void showArray(const double arr[], int n) {
    using namespace std;
    for (int i = 0; i < n; ++i) {
        cout << "Property #" << (i + 1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n) {
    using namespace std;
    for (int i = 0; i < n; ++i) {
        arr[i] *= r;
    }
}
