/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* h = l1;
        ListNode* pre = l1;
        while(l1!=NULL)
        {
            int l2val = l2?l2->val:0;
            l1->val += l2val+carry;
            carry = l1->val/10;
            l1->val= l1->val%10;
            pre = l1;
            l1 = l1->next;
            l2 = l2?l2->next:NULL;
            if(l1 == NULL) {
            pre->next = l2;
            l2 = NULL;
            l1 = pre->next;
            }
        }
        if(carry!=0){
            pre->next = new ListNode(1);
        }
        return h;
    }
};