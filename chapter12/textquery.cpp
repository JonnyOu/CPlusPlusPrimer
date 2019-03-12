// File Name: textquery.cpp
// Author: JonnyOu
// Created Time: Tue 12 Mar 2019 07:29:19 PM CST

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include "textquery.h"
using namespace std;

TextQuery::TextQuery(ifstream &is): file(new vector<string>) {
    string text;
    while (getline(is, text)) { //对文件中每一行
        file->push_back(text); //保存此行文本
        int n = file->size()-1; //当前行号
        istringstream line(text); //将行文本分解为单词
        string word;
        while (line >> word) { //对行中的每个单词
            //如果单词不在wm中，以之为下标在wm中添加一项
            auto &lines = wm[word]; //lines是一个shared_ptr
            if (!lines) 
                lines.reset(new set<line_no>); //分配一个新的set
            lines->insert(n); //将次行号插入set中
        }
    }
}

QueryResult TextQuery::query(const string &sought) const {
    //如果为找到sought，我们将返回一个指向次set的指针
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    //使用find而不是下标运算符来查找单词，避免将单词添加到wm中
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file); //未找到
    else 
        return QueryResult(sought, loc->second, file);
}

ostream &print(ostream &os, const QueryResult &qr) {
    //如果找到了单词，打印出现次数和所有出现的位置
    string s = "time";
    if (qr.lines->size() != 0) 
        s += "s";
    os << qr.sought << " occurs " << qr.lines->size() << " " <<
        s << endl;
    //打印单词出现的每一行
    for (auto num : *qr.lines)
        os << "\t(line " << num+1 << ")" << *(qr.file->begin() + num) << endl;
    return os;
}
