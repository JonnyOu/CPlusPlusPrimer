// File Name: person.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 08:45:59 PM CST

#include <iostream>
#include "person.h"
using namespace std;

istream &read(istream &is, Person &item) {
    cout << "输入人的姓名和地址" << endl;
    string name, address;
    is >> name >> address;
    item.set_name(name);
    item.set_address(address);
    return is;
}

ostream &print(ostream &os, const Person &item) {
    os << "姓名: " << item.get_name() << '\n' 
        << "地址: " << item.get_address() << endl;
    return os;
}

Person::Person(istream &is) {
    read(is, *this);
}
