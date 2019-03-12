// File Name: Sales_data.cpp
// Author: JonnyOu
// Created Time: Sun 10 Mar 2019 08:19:59 PM CST

#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else 
        return 0;
}

Sales_data add(const Sales_data &a, const Sales_data &b) {
    Sales_data c = a;
    c.combine(b);
    return c;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.get_bookNo() << " " << item.get_units_sold() << " " 
        << item.get_revenue() << " " << item.avg_price() << endl;
    return os;
}


istream &read(istream &is, Sales_data &item) {
    string bookNo;
    unsigned units_sold;
    double price = 0; //书本单价
    cout << "请依次输入书本编号，总销售量以及书本单价:" << endl;
    is >> bookNo >> units_sold >> price;
    item.set_bookNo(bookNo);
    item.set_units_sold(units_sold);
    item.set_revenue(price * units_sold);
    return is;
}

Sales_data::Sales_data(istream &is) {
    read(is, *this);
}


