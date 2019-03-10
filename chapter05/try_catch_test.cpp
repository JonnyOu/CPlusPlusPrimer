// File Name: try_catch_test.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 11:01:46 AM CST

#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    
    int a = 1, b = 0;
    
    try {

        if (a != b) 
            throw runtime_error("a != b"); 
    } catch (runtime_error err) {
        cout << err.what()
            << "\n i am catch.";
    }
        
        
        cout << a << ' ' << b << endl;

    return 0;
}
