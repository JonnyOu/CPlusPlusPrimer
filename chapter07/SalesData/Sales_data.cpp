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

ostream &print(ostream &os, const Sales_data &sd) {
    os << sd.isbn() << " " << sd.total_solds() << " " 
        << sd.sales_revenue() << " " << sd.avg_price();
    return os;
}


istream &read(istream &is, Sales_data &sd) {
    double price = 0; //书本单价
    is >> sd.bookNo >> sd.units_sold >> price;
    sd.revenue = price * sd.units_sold;
    return is;
}

