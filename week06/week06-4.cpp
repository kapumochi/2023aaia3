//LeetCode 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N = a.size(); //�}�Ca��N�Ӽ�
            if(s== "+") a.push_back(a[N-1]+a[N-2]);
            else if(s== "D") a.push_back(a[N-1]+a[N-1]);
            else if(s== "C") a.pop_back();
            else a.push_back( stoi(s) );
        }

        //�̫��}�C�����[�_��
        int ans = 0;
        for(int b:a) ans += b;
        return ans;
    }
};
