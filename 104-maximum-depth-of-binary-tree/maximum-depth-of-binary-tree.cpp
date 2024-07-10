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
    int ans=0;
    void maxdepth(TreeNode* root,int cnt)
    {
        if(root==nullptr)
        {
            ans=max(ans,cnt);
            return;
        }
      
        maxdepth(root->left,cnt+1);
       
        maxdepth(root->right,cnt+1);
        
    }
    int maxDepth(TreeNode* root) {
        maxdepth(root,0);
        return ans;
    }
};