// File Name: 5_23.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 12:44:50 PM CST

#include <iostream>
#include <stdexcept>
using namespace std;

int main(){

    int a, b;
    
    cout << "input two integer:";
    while (cin >> a >> b) {
        if (b == 0)
            throw range_error("range_error");
        cout << (a/b) << endl;
        cout << "input two integer:";
    }

    return 0;
}
