// File Name: 6_27.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 03:30:02 PM CST

#include <iostream>
#include <initializer_list>

using namespace std;

void test(initializer_list<int> il) {
    int sum = 0;
    for (auto &elem : il)
        sum += elem;
    cout << sum << endl;
}

int main(){

    test({10,20,30,40});

    return 0;
}
