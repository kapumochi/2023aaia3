
 #include <iostream>
 #include <string>
 using namespace std;
 struct Node {
    int val; //value值
 };
 class Cat {
    public:
    string name;
 };
 int main()
 {
    Cat cat1; //大寫是宣告,小寫是變數
    cat1.name = "Kitty";
    Node node;
    node.val = 1;
 }
