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
            //上面這邊week12-2.cpp不一樣的是,如果有一邊是空指標就會結束所以不能用&&要用||
            if(list1==nullptr){ //左邊是空的
                now->next = list2; //就把右邊全接下
                break; //結束
            }
            if(list2==nullptr){ //右邊是空的
                now->next = list1; //就把左邊全接下
                break; //結束
            }
            else if(list1->val < list2->val){
                now->next =new ListNode(list1->val);//比較小先放入
                list1 = list1->next; //換下一筆
                now =now->next; //答案也換下一筆
            }
            else{
                now->next =new ListNode(list2->val);//比較小先放入
                list2 = list2->next; //換下一筆
                now =now->next; //答案也換下一筆
            }
        }
        return ans->next; //起始值是0,所以我們要的資料在下一筆
    }
};
