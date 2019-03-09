// File Name: for_test.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 03:29:15 PM CST

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string s = "hello, girl!";

    int punct_cnt = 0;

    for (auto c : s)
        if (ispunct(c)) 
            punct_cnt++;
    
    cout << punct_cnt << endl;

    return 0;
}
