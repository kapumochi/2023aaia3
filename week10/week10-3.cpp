//week10-3.cpp
//進階的 class 裡面有建構函式
#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    Cat(string _name){//會有底線是因為如果變數一樣程式會出錯
        name = _name;
    }
    string name;
    void print(){
        cout << "I am a cat. My name is " << name << ".\n";
    }
};

int main()
{
    Cat cat1("小花"), cat2("小白");
    cat1.print();
    cat2.print();
}

