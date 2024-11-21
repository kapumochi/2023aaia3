//week11-5a.cpp
//LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int num : nums){
            ans *= num;
        }
        if(ans>0) return 1;
        else if(ans==0) return 0;
        else return -1;
    }
};
