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
    ListNode* middleNode(ListNode* head) {
        int l=0;
        struct ListNode *n=head;
        while(n!=NULL)
        {
            n=n->next;
            l++;
        }
        l=l/2;
        n=head;
        while(l--)
        {
            n=n->next;
        }
        return n;
    }
};