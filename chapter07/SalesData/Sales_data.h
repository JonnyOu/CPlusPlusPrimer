#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
using namespace std;

struct Sales_data { //数据库的书本类

    private: 
        //成员变量
        string bookNo; //书本编码
        unsigned units_sold = 4; //书本总销售量
        double revenue = 1115.8; //书本总销售额
        double avg_price() const;  //求平均价格

    public:
        //构造函数
        Sales_data() = default;
        Sales_data(const string &s): bookNo(s) {}
        Sales_data(const string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p*n) {}
        Sales_data(istream &is);

        //set和get方法
        void set_bookNo(string bookNo) {this -> bookNo = bookNo;}
        void set_units_sold(unsigned units_sold) {this -> units_sold = units_sold;}
        void set_revenue(double revenue) {this -> revenue = revenue;}
        string get_bookNo() const {return bookNo;} 
        unsigned get_units_sold() const {return units_sold;}
        double get_revenue() const {return revenue;}

        //成员接口函数
        Sales_data& combine(const Sales_data&); //组合两条数据

        
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend ostream &print(ostream&, const Sales_data&);
    friend istream &read(istream&, Sales_data&);
};

//Sales_data的非成员接口函数
Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);







#endif
