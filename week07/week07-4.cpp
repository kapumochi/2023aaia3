class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while(ss >> word){} //通通丟進去word陣列裡面

        return word.length();  //輸出word陣列的長度
    }
};
