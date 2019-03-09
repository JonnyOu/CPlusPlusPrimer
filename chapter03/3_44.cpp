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
    //using int_array = int[4];
    typedef int int_array[4];
    //以上两条语句等价，int_array是int[4]的类型别名,可是为啥不是typedef int[4] int_array[4]呢?
    for (int_array &row : a) {
        for (int &col : row) 
            cout << col << ' ';
        cout << endl;
    }
    

    //程序2输出
    typedef int INT;
    for (INT i = 0; i != row_cnt; i++) {
        for (INT j = 0; j != col_cnt; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
    //程序3输出
    using IN = int(*)[4];
    using INN = int *;
    IN k = begin(a);
    for (;k != end(a); k++) {
        for (INN n = *k; n != (*k+4); n++) 
            cout << *n << ' ';
        cout << endl;
    }            

    return 0;
}
