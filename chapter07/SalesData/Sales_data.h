#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
using namespace std;

struct Sales_data { //数据库的书本类
    string isbn() const {return bookNo;} //返回书本的ISBN编号
    unsigned total_solds() const {return units_sold;}
    double sales_revenue() const {return revenue;}
    Sales_data& combine(const Sales_data&); //组合两条数据
    double avg_price() const;  //求平均价格

    string bookNo; //书本编码
    unsigned units_sold = 0; //书本总销售量
    double revenue = 0.0; //书本总销售额

};

//Sales_data的非成员接口函数
Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);








#endif
