// File Name: test.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 02:38:12 PM CST

#include <iostream>
#include <vector>
using namespace std;

int main(){

    unsigned bufsize;
    unsigned ival = 512, jval = 1024, kval = 4096;
    char swt;
    cout << "input a number, val maybe 521, 1024 or 4096\n";
    cin >> swt;
    switch (swt) {
        case 'i':
            bufsize = ival * sizeof(int);
           // cout << "ival" << endl;
            break;
        case 'j':
            bufsize = jval * sizeof(int);
           // cout << "jval" << endl;
            break;
        case 'k':
            bufsize = kval * sizeof(int);
           // cout << "kval" << endl;
            break;
        default:
            cout << "others" << endl;
            break;
    }
    cout << bufsize << endl;
    return 0;
} 
