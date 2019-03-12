// File Name: test.cpp
// Author: JonnyOu
// Created Time: Tue 12 Mar 2019 07:29:27 PM CST

#include <iostream>
#include <fstream>
#include "textquery.h"
using namespace std;

void run_queries(ifstream &infile);

int main(int argc, char *argv[]){
    ifstream input(argv[1]);
    run_queries(input);    

    return 0;
}

void run_queries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "Enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") 
            break;
        print(cout, tq.query(s)) << endl;
    }
}
