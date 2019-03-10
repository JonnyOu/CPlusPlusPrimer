// File Name: 5_9.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 09:56:00 AM CST

#include <iostream>
#include <string>
using namespace std;

int main(){

    string str;
    int vowel_cnt = 0;
    int a_cnt = 0, e_cnt = 0, i_cnt = 0, o_cnt = 0, u_cnt = 0,
        table_cnt = 0, space_cnt = 0, enter_cnt = 0;
    cout << "input a sequence(input '0' tp exit.)\n"; 
    char c;

    while (cin >> c, c != '0') {
        switch(c) {
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
            case '\t':
                table_cnt++;
                break;
            case '\n':
                enter_cnt++;
                break;
            case ' ':
                space_cnt++;
                break;
            default:
                break;
        }

    }    

    cout << a_cnt << " a or A;\n" 
         << e_cnt << " e or E;\n" 
        << i_cnt << " i or I;\n" 
        << o_cnt << " o or O;\n" 
        << u_cnt << " u or U;\n" 
        << table_cnt << " table;\n"
        << space_cnt << " space;\n"
        << enter_cnt << " enter;"
        << endl;

    return 0;
}
