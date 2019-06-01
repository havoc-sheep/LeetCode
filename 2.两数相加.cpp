/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//最大99+99=198，往前传1
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = new ListNode(0);
        ListNode* pHead = head;   //必须添加
        int sum = 0, temp = 0;
        while(l1 != NULL || l2 != NULL){
            int x = (l1 != NULL)? l1->val : 0;
            int y = (l2 != NULL)? l2->val : 0;
            sum = x+y+temp;
            pHead-> next = new ListNode(sum%10);
            pHead = pHead->next;
            temp = sum/10;
            if(l1 != NULL) l1=l1->next;
            if(l2 != NULL) l2=l2->next;
        }
        if(temp > 0){
            pHead ->next = new ListNode(temp);
        }
        return head->next;
    }
};
