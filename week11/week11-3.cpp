//week11-3.cpp
///�Q�ݬ�Hash Map ����Ӫ�j�B
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()\
{
    ///�j�G�W"��Ƶ��c�t��k"�Ъ� Hash Map �����
    unordered_map<string, int> m; ///
    m["���W�Z"] = 10160286; ///�����r��,�k���int���
    m["�L�W��"] = 12790000;

    cout << "���W�Z���Ǹ��O:" << m["���W�Z"] << endl;
    cout << "�L�W�󪺾Ǹ��O:" << m["�L�W��"] << endl;
}
