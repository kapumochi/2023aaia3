//LeetCode 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0; //�k�s����I
        for(char c : moves){ //�w��C�@�Ӳ��ʪ��r��
            if(c=='U') y++; //���W
            if(c=='D') y--; //���U
            if(c=='R') x++; //����
            if(c=='L') x--; //���k
        }
        if(x==0 && y==0) return true; //�ˬd�O�_�٦b���I,�p�G�O�h���\
        else return false;
    }
};
