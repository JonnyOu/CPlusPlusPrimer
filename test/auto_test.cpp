// File Name: test.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 09:02:49 AM CST

#include <iostream>

using namespace std;

string str;
int t;

int main(){

    int val1 = 10, val2 = 20;
    double val3 = 3.14;

    auto item = val1 + val2;
    cout << item << endl;

    auto item2 = val1 + val3;
    cout << item2 << endl;

    return 0;
} 
