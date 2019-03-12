// File Name: test.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 03:43:18 PM CST

#include <iostream>
#include <string>
using namespace std;

#define fun(x) x*x
#define fun2(x,y) ((x>y)?(x):(y))

const string &shorterString(const string &s1, const string &s2) { 
    return s1.size() <= s2.size() ? s1 : s2;
}

int ff(int a, int b = 0, int c = 0);
char *init(int ht, int wd = 10, char bckgrnd = ' ');

int main(){

    string s1 = "123";
    string s2 = "1234";
    string s3 = shorterString(s1, s2);
    cout << s3 << endl;


    string s4 = "12345";
    string &s5 = s4;
    string s6 = s5;
    s6 += "123";
    cout << s6 << endl;
    s5 += "111";
    cout << s4 << endl;
    cout << s5 << endl;

    int k = fun(5);
    cout << k << endl;
    int t = fun2(3,2);
    cout << t << endl;
    return 0;
}
