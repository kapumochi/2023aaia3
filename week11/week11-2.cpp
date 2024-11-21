//week11-2.cpp
///要試試看c++ 2011 c++11的功能

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

///Settings >> Compiler >> have g++ C++11

using namespace std;

int main()
{
    vector<int> a;
    unordered_map<int,int> m;
    m[999] = 13;
    m[137] = 7;
    cout << "m[999] 的值是 " << m[999] << endl;
    cout << "m[137] 的值是 " << m[137] << endl;
    return 0;
}
