// File Name: 5_23.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 12:44:50 PM CST

#include <iostream>
#include <stdexcept>
using namespace std;

int main(){

    int a, b;
    
    cout << "input two integer:";
    while (cin >> a >> b) {
        try {
            if (b == 0)
                throw range_error("range_error");
            cout << (a/b) << endl;
        } catch (range_error re) {
            cout << re.what()
                << "\nTry again? Enter y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
        
        cout << "the answer of a/b is:";
    }

    return 0;
}
