//week10-5.cpp
//LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0, d10=0, d20=0; //一開始,甚麼都沒有
        for(int c : bills){ //進階用法
            if(c==5) d5++; //收5元
            if(c==10){ //如果10元的分支
                if(d5>0){ //有5元的硬幣的話
                    d10++;
                    d5--;
                }
                else return false;//找不出來錢,回傳false
            }
            if(c==20){ //如果20元的分支
                if(d10>0 && d5>0){ //有5元的硬幣且有10元的硬幣的話
                    d20++;
                    d10--;
                    d5--;
                }
                else if(d5>=3){ //有三個以上5元的硬幣的話
                    d20++;
                    d5-=3;
                }
                else return false;//找不出來錢,回傳false
            }

        }
        return true;//找得出來錢,回傳true
    }
};
