//week10-1.cpp
#include <iostream>
using namespace std;
//�b�gclass cat ���ɭ� {}; �A�h��2��Enter
class Cat { //�ߪ����O
public://�]�����},���M�䤣�����O
    void print(){
        cout << "I am a cat. meow meow\n";
    }
};

class Mouse{
public://�]�����},���M�䤣�����O
    void print(){
        cout << "I am a mouse. chi chi chi\n";
    }
};

int main()
{
    Cat cat1, cat2; //cat1, cat2 ���O cat
    cat1.print();
    cat2.print();

    Mouse mouse1, mouse2;
    mouse1.print();
    mouse2.print();
}
