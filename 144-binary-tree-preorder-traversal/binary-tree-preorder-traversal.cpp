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
    vector<int>ans;
    void iterativepreorder(TreeNode* root)
    {
        stack<TreeNode*>st;
        if(root==nullptr)return ;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* curr=st.top();
            st.pop();
            ans.push_back(curr->val);
            if(curr->right!=NULL)
            {
                st.push(curr->right);
            }
            if(curr->left!=NULL)
            {
                st.push(curr->left);
            }
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        iterativepreorder(root);
        return ans;
    }
};