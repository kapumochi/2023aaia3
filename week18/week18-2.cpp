class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> ans;

        int i = 0, j = 0;
        //0往右,1往下,2往左,3往上
        int d = 0;
        int di[4] = {0,1,0,-1};
        int dj[4] = {1,0,-1,0};

        while(ans.size() < M*N){ //長度還不夠,就繼續加
            ans.push_back(matrix[i][j]);
            matrix[i][j] = 999;
            int i2 = i + di[d], j2 = j + dj[d];
            if(i2<0 || j2<0 || i2>=M || j2>=N || matrix[i2][j2]==999){
                d = (d+1) % 4; //就轉彎
            }
            i = i + di[d]; //換下一格
            j = j + dj[d]; //換下一格
        }
        return ans;
    }
};
