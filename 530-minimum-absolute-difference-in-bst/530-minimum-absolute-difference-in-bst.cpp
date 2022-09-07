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
    int getMinimumDifference(TreeNode* root) {
        int minm=INT_MAX, v=-1;
        return diff(root,v,minm);
    }
    int diff(TreeNode* root, int& v, int &minm)
    {
        if(root->left!=NULL)
            diff(root->left,v,minm);
        if(v>=0)
            minm=min(minm,root->val-v);
        v=root->val;
        if(root->right!=NULL)
            diff(root->right,v,minm);
        return minm;
    }
};