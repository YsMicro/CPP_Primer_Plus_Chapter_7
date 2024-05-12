//
// Created by Vojago on 2024/5/13.
//
#include <iostream>

void cheers(int);

double cube(double x);

[[maybe_unused]] int code_02() {
    using namespace std;
    cheers(5);
    cout << "给我一个数：";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "边长 " << side << " 英尺的立方体的体积为 " << volume << " 立方英尺。\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n) {
    using namespace std;
    for (int i = 0; i < n; ++i)
        cout << "芜湖！";
    cout << endl;
}

double cube(double x) {
    return x * x * x;
}
