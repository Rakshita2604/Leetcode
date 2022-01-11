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
    int convert(vector <int>& a)
    {
        int j=0,result=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            result=result +(a[i] *pow(2,j));
            j++;
        }
        return result;
    }
    int getDecimalValue(ListNode* head) {
        vector <int> a;
        while(head)
        {
            a.push_back(head->val);
            head=head->next;
        }
        int ans=convert(a);
        return ans;
    }
};