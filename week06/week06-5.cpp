//LeetCode Weekly Test;670. Maximum Swap

class Solution {
public:
    int maximumSwap(int num) {
        int ans = num; //��²�檺���״N�O����
        string s = to_string(num); //stoi()�ϹL�� *stoi�쥻�OC�y������ܤ覡,���OC++�勵�F�禡�ݤ��������D
        //for(int i=0; i<s.length(); i++){ //�����n�ΰj���s����
        //    cout << s[i] << ' '; //�m�ߦL�ݬ�
        //}
        for(int i=0; i<s.length()-1; i++){ //����i
            for(int j=i+1; j<s.length(); j++){ //�k��j
                swap(s[i],s[j]); //�洫 s[i] s[j]���
                ans = max(ans, stoi(s)); //�ݬO�_��j,��s
                swap(s[i],s[j]); //�b���^��
            }
        }
        return ans;


    }
};
