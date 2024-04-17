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
    int sum=0;
    void dfs(TreeNode* root)
    {
        if(root->left!=NULL)
        {
            if(root->left->left==NULL and root->left->right==NULL)sum+=root->left->val;
            dfs(root->left);
        }
        if(root->right!=NULL)dfs(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        dfs(root);
        return sum;

    }
};