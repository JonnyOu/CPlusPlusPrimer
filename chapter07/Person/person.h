#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

struct Person {

    private:
        string name;
        string address;
    
    public:
        //构造函数
        Person() = default;
        Person(const string &name): name(name) {}
        Person(const string &name, const string &address): name(name), address(address) {}
        Person(istream &);    

        string get_name() const {return name;}
        string get_address() const {return address;}
        void set_name(string name) {this -> name = name;}
        void set_address(string address) {this -> address = address;}
     
    friend istream &read(istream &, Person &);
    friend ostream &print(ostream &, const Person &);

};

istream &read(istream &, Person &);
ostream &print(ostream &, const Person &);

















#endif
