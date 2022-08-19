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
    ListNode* reverse(ListNode* first, ListNode* last)
    {
        ListNode* previous=last;
        while(first!=last)
        {
            ListNode* temp=first->next;
            first->next=previous;
            previous=first;
            first=temp;
        }
        return previous;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* n=head;
        for(int i=0;i<k;i++)
        {
            if(!n)
                return head;
            n=n->next;
        }
        ListNode* newhead=reverse(head,n);
        head->next=reverseKGroup(n,k);
        return newhead;
    }
};