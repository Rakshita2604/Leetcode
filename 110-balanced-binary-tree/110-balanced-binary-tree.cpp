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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int c=height(root->left);
        int d=height(root->right);
        return (abs(c-d)<=1 && (isBalanced(root->left)) && (isBalanced(root->right)));
           
    }
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return (max(lh,rh)+1);
    }
};