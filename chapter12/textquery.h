#include <vector>
#include <string>
#include <iostream>
#include <memory>
#include <map>
#include <set>
using namespace std;

class QueryResult;
class TextQuery {
    public:
        using line_no = vector<string>::size_type;
        TextQuery(ifstream&);
        QueryResult query(const string&) const;
    private:
        shared_ptr<vector<string>> file;
        map<string, shared_ptr<set<line_no>>> wm;
};

class QueryResult {
    friend ostream& print(ostream&, const QueryResult&);
    public:
        using line_no = vector<string>::size_type;
        QueryResult(string s, 
                    shared_ptr<set<line_no>> p, 
                    shared_ptr<vector<string>> f):
            sought(s), lines(p), file(f) {}
    private:
        string sought; //查询单词
        shared_ptr<set<line_no>> lines; //出现的行号
        shared_ptr<vector<string>> file; //输入文件
};
        
ostream &print(ostream &os, const QueryResult &qr);


