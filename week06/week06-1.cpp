//week 06-1.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a; ///�ʺA�}�C a �̭��˫ܦh int
    a.push_back(20);
    a.push_back(30);
    a.push_back(50);
    for(int i=0;i<a.size();i++){
      cout << a[i] << "\n"; ///�� a[i] ���X��
    }
    sort(a.begin(), a.end());
    for(int i=0; i<a.size(); i++) cout << a[i] << ' ';
}
