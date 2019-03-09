// File Name: decltype_test.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 02:01:30 PM CST

#include <iostream>

using namespace std;

int main(){

    int a = 3, b = 4;
    decltype(a = b)c = a;

    cout << c << endl;

    return 0;
}
