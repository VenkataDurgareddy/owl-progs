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
  
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q1;
        q1.push(root);
        int state=0;
        vector<int>ans;
        while(!q1.empty())
        {
            int size=q1.size();
            vector<int>level;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q1.front();
                q1.pop();
                if(state%2)node->val=ans[size-i-1];
                if(node->left)
                {
                    q1.push(node->left);
                    level.push_back(node->left->val);
                }
                if(node->right)
                {
                    q1.push(node->right);
                    level.push_back(node->right->val);
                }
            }
            ans=level;
            state++;
        }
       return root; 
    }
};