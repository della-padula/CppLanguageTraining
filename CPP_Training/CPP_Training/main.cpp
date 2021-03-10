//
//  main.cpp
//  CPP_Training
//
//  Created by denny on 2021/02/26.
//

#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b) {
    T result;
    result = a + b;
    return result;
}

int main () {
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    cout << k << '\n';
    cout << h << '\n';
    return 0;
}
