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
    bool isValidBST(TreeNode* root) {
        return isBst(root, NULL,NULL);
    }
    bool isBst(TreeNode * root, TreeNode * min, TreeNode * max)
    {
        if(root==NULL)
            return true;
        else if((min!=NULL && root->val<=min->val) ||(max!=NULL  && root->val >=max->val))
            return false;
        else if(isBst(root->left, min, root) && isBst(root->right,root, max))
            return true;
        return false;
    }
};