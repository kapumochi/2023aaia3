class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        //for(int i=0; I<words.size(); i++)
        //      words[i]
        int ans = 0;
        for(string word : words){
            int bad = 0;
            for(int i=0; pref[i]!=0; i++){
                if(pref[i] != word[i]){
                    bad = 1;
                    break;
                }
            }
            if(bad==0) ans++;
        }
        return ans;
    }
};
