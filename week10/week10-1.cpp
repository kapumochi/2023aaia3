//week10-1.cpp
#include <iostream>
using namespace std;
//在寫class cat 的時候 {}; 再多打2個Enter
class Cat { //貓的類別
public://設成公開,不然找不到類別
    void print(){
        cout << "I am a cat. meow meow\n";
    }
};

class Mouse{
public://設成公開,不然找不到類別
    void print(){
        cout << "I am a mouse. chi chi chi\n";
    }
};

int main()
{
    Cat cat1, cat2; //cat1, cat2 都是 cat
    cat1.print();
    cat2.print();

    Mouse mouse1, mouse2;
    mouse1.print();
    mouse2.print();
}
