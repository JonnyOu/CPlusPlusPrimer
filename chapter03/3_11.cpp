// File Name: 3_11.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 03:49:40 PM CST

#include <iostream>
#include <string>
using namespace std;

int main(){

    const string s = "Keep out!";
    for (auto &c : s) {
        c = 'x';    
    }
    cout << s << endl;

    return 0;
}
