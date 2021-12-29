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
    ListNode* s=NULL;
    ListNode* reverse(ListNode* head, int n)
    {
        if(n==1)
        {
            s=head->next;
            return head;
        }  
        ListNode* last=reverse(head->next,n-1);
        head->next->next=head;
        head->next=s;
        return last;
    }
    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
        if(m==1)
            return reverse(head,n);
        head->next=reverseBetween(head->next,m-1,n-1);
        return head;
    }
};