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
    void inorder(vector<int>&v,TreeNode* root)
    {
        if(root!=NULL)
        {
            inorder(v,root->left);
            v.push_back(root->val);
            inorder(v,root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>v;
        inorder(v,root);
        vector<int>hash;
        for(auto it:v)
        {
            int sub=k-it;
            if(find(hash.begin(),hash.end(),sub)!=hash.end())
            {
                return true;
            }
            else{
                hash.push_back(it);
            }
        }
        return false;

    }
};