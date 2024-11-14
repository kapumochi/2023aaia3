//LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0; //歸零到原點
        for(char c : moves){ //針對每一個移動的字母
            if(c=='U') y++; //往上
            if(c=='D') y--; //往下
            if(c=='R') x++; //往左
            if(c=='L') x--; //往右
        }
        if(x==0 && y==0) return true; //檢查是否還在原點,如果是則成功
        else return false;
    }
};
