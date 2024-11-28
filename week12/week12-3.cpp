//week12-3.cpp LeetCode 21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        ListNode* now = ans;
        while(list1 != nullptr || list2 != nullptr){
            //�W���o��week12-2.cpp���@�˪��O,�p�G���@��O�ū��дN�|�����ҥH�����&&�n��||
            if(list1==nullptr){ //����O�Ū�
                now->next = list2; //�N��k������U
                break; //����
            }
            if(list2==nullptr){ //�k��O�Ū�
                now->next = list1; //�N�⥪������U
                break; //����
            }
            else if(list1->val < list2->val){
                now->next =new ListNode(list1->val);//����p����J
                list1 = list1->next; //���U�@��
                now =now->next; //���פ]���U�@��
            }
            else{
                now->next =new ListNode(list2->val);//����p����J
                list2 = list2->next; //���U�@��
                now =now->next; //���פ]���U�@��
            }
        }
        return ans->next; //�_�l�ȬO0,�ҥH�ڭ̭n����Ʀb�U�@��
    }
};
