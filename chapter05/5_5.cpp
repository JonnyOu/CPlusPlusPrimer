// File Name: 5_5.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 09:06:06 AM CST

#include <iostream>
#include <vector>
using namespace std;

string change(int );
const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

int main(){

    int grade;

    cout << "input your grade:";
    
    cin >> grade;

    string lettergrade = change(grade);

    cout << "grade is " << grade << " have " << lettergrade << '.' << endl;  

    return 0;
}

string change(int grade) {
    if (grade == 100)
        return scores[5];
    else if (grade < 100 && grade >= 90)
        return scores[4];
    else if (grade < 90 && grade >= 80)
        return scores[3];
    else if (grade < 80 && grade >= 70)
        return scores[2];
    else if (grade < 70 && grade >= 60)
        return scores[1];
    else 
        return scores[0];
}
