//week09-2.cpp
//LeetCode 1572. Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M = mat.size();
        int ans = 0;
        for(int i=0; i<M; i++){
            ans += mat[i][i]; //���W~~�k�U
            ans += mat[i][M-1-i]; //�k�W~~���U
        }
        if(M%2==1) ans -= mat[M/2][M/2];
        return ans;
    }
};
