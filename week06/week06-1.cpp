//week 06-1.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a; ///動態陣列 a 裡面裝很多 int
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);
    for(int i=0;i<a.size();i++){
      cout << a[i] << "\n"; ///用 a[i] 取出來
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
}
