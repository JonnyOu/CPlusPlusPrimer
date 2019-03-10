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
    string s;
    (grade == 100)?(s=scores[5]):
        ((grade < 100 && grade >= 90)?(s=scores[4]):
         ((grade < 90 && grade >= 80)?(s=scores[3]):
          ((grade < 80 && grade >= 70)?(s=scores[2]):
           ((grade < 70 && grade >= 60)?(s=scores[1]):
            (s=scores[0])))));
    return s;
        /*
        ((grade < 100 && grade >= 90)?(return scores[4]):
    (grade < 90 && grade >= 80)?(return scores[3]):
    (grade < 80 && grade >= 70)?(return scores[2]):
    (grade < 70 && grade >= 60)?(return scores[1]):
    (return scores[0]));
    */
}
