#include <iostream>
#include <vector>
using namespace std;

class Screen {
    public:
        typedef string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
        char get() const {return contents[cursor];}
        inline char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
        void some_member() const;

    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;
        mutable size_t access_ctr;
};

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

void Screen::some_member() const {
    ++access_ctr;
}

Screen &Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

class Window_mgr {
    private:
        vector<Screen> screens{Screen(24, 80, ' ')};
};
