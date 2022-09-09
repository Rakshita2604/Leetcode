/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxm=0,curr=0,ptr=INT_MIN;
    vector <int> ans;
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return ;
        inorder(root->left);
        if(ptr==root->val)
            curr++;
        else
            curr=1;
        if(curr>maxm)
        {
            ans.clear();
            maxm=curr;
            ans.push_back(root->val);
        }
        else if(curr==maxm)
        {
            ans.push_back(root->val);
        }
        ptr=root->val;
        inorder(root->right);
    }
};