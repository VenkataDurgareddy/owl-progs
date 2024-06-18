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
    int maxdep(TreeNode* root)
    {
        if(root==nullptr)return 0;
        int left=1,right=1;
        if(root->left!=NULL)
        {
            left=1+maxdep(root->left);
        }
        if(root->right!=NULL)
        {
            right=1+maxdep(root->right);
        }
        return max(left,right);
    }
    int maxDepth(TreeNode* root) {
        int ans=maxdep(root);
        return ans;
    }
};