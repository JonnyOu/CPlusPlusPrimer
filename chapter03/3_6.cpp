// File Name: 3_6.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 03:40:38 PM CST

#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "1234556";

    for (char &c : s)
        c = 'x';

    cout << s << endl;

    return 0;
}
