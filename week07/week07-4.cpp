class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss >> word){} //�q�q��i�hword�}�C�̭�

        return word.length();  //��Xword�}�C������
    }
};
