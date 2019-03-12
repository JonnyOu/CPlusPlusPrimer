// File Name: test.cpp
// Author: JonnyOu
// Created Time: Sat 09 Mar 2019 02:38:12 PM CST

#include <iostream>
#include <vector>
using namespace std;

class Test {
    public:
        string str;
        Test(string s = ""): str(s) {}
        Test(istream &is = cin) {is >> (this -> str);}
};

int main(){
   
    Test test(cin);
    cout << (test.str) << endl; 

    return 0;
} 

