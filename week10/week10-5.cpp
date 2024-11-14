//week10-5.cpp
//LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0, d10=0, d20=0; //�@�}�l,�ƻ򳣨S��
        for(int c : bills){ //�i���Ϊk
            if(c==5) d5++; //��5��
            if(c==10){ //�p�G10��������
                if(d5>0){ //��5�����w������
                    d10++;
                    d5--;
                }
                else return false;//�䤣�X�ӿ�,�^��false
            }
            if(c==20){ //�p�G20��������
                if(d10>0 && d5>0){ //��5�����w���B��10�����w������
                    d20++;
                    d10--;
                    d5--;
                }
                else if(d5>=3){ //���T�ӥH�W5�����w������
                    d20++;
                    d5-=3;
                }
                else return false;//�䤣�X�ӿ�,�^��false
            }

        }
        return true;//��o�X�ӿ�,�^��true
    }
};
