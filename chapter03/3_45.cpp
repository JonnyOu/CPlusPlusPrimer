// File Name: 3_43.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 07:00:08 PM CST

#include <iostream>
#include <iterator>
using namespace std;

int main(){

    int rec = 0;
    const int row_cnt = 3, col_cnt = 4;
    int a[row_cnt][col_cnt];

    for (int i = 0; i != row_cnt; i++)
        for (int j = 0; j != col_cnt; j++)
                a[i][j] = rec++;

    //程序1输出
    for (auto &row : a) {
        for (auto &col : row) 
            cout << col << ' ';
        cout << endl;
    }

    //程序2输出
    for (auto i = 0; i != row_cnt; i++) {
        for (auto j = 0; j != col_cnt; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
    //程序3输出
    for (auto k = begin(a);k != end(a); k++) {
        for (auto n = *k; n != (*k+4); n++) 
            cout << *n << ' ';
        cout << endl;
    }            

    return 0;
}