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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)
            return head;
        ListNode* n=head;
        int l=1;
        while(n->next!=NULL)
        {
            n=n->next;
            l++;
        }
        n->next=head;
        k=k%l;
        k=l-k;
        while(k--)
            n=n->next;
        head=n->next;
        n->next=NULL;
        return head;
    }
};