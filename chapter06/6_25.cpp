// File Name: 6_25.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 03:03:19 PM CST

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
    
   //运行程序同时传递命令行参数 
    string a = argv[1], b = argv[2];
    string s = a + b;
        
    cout << s << endl;

    return 0;
}
