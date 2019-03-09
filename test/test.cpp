// File Name: test.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 02:38:12 PM CST

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

    for (int i = 0; i < 10; i++)
        v.push_back(i);

    for (auto it : v) 
        cout << it << endl;

    return 0;
} 
