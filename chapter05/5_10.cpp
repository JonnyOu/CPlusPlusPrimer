// File Name: 5_9.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 09:56:00 AM CST

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int vowel_cnt = 0;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0;

    cout << "input a string:";
    cin >> str;
    
    for (auto i = 0; i < str.size(); i++) {
        switch(str[i]) {
            case 'a':
                a_cnt++;
                break;
            case 'A':
                a_cnt++;
                break;
            case 'e':
                e_cnt++;
                break;
            case 'E':
                e_cnt++;
                break;
            case 'i':
                i_cnt++;
                break;
            case 'I':
                i_cnt++;
                break; 
            case 'o':
                o_cnt++;
                break;
            case 'O':
                o_cnt++;
                break;
            case 'u':
                u_cnt++;
                break;
            case 'U':
                u_cnt++;
                break;
            default:
                break;
        }

    }    

    cout << str << " have " << a_cnt << " a or A; " 
                            << e_cnt << " e or E; " 
                            << i_cnt << " i or I; " 
                            << o_cnt << " o or O; " 
                            << u_cnt << " u or U; " << endl;

    return 0;
}
