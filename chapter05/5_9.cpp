// File Name: 5_9.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 09:56:00 AM CST

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int vowel_cnt = 0;

    cout << "input a string:";
    cin >> str;
    
    for (auto i = 0; i < str.size(); i++) 
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowel_cnt++;

    cout << str << " have " << vowel_cnt << " vowel words" << endl;
    
    return 0;
}
