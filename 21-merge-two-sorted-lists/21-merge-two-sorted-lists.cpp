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
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        ListNode* p=list1;
        if(list1->val>list2->val)
        {
            p=list2;
            list2=list2->next;
        }
        else
            list1=list1->next;
        ListNode* current=p;
        while(list1 && list2)
        {
            if(list1->val <list2->val)
            {
                current->next=list1;
                list1=list1->next;
            }
            else
            {
                current->next=list2;
                list2=list2->next;
            }
            current=current->next;
        }
        while(list1!=NULL)
            {
                current->next=list1;
                list1=list1->next;
                current=current->next;
            }
        while(list2!=NULL)
             {
                current->next=list2;
                list2=list2->next;
                current=current->next;
            }
        return p;
    }
};