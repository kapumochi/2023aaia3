//week11-3.cpp
///想看看Hash Map 的對照表強處
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()\
{
    ///大二上"資料結構演算法"教的 Hash Map 雜湊表
    unordered_map<string, int> m; ///
    m["陳名凡"] = 10160286; ///左邊放字串,右邊放int整數
    m["無名氏"] = 12790000;

    cout << "陳名凡的學號是:" << m["陳名凡"] << endl;
    cout << "無名氏的學號是:" << m["無名氏"] << endl;
}
