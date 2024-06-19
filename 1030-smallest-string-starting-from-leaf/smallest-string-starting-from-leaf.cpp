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
    vector<string>str;
    void lexstring(TreeNode* root,string ans)
    {
        if(root==nullptr)
        {
            return;
        }
         ans += (char)(root->val + 'a');
         if(root->left == nullptr && root->right == nullptr) {
            reverse(ans.begin(),ans.end());
            str.push_back(ans);
            return;
        }

        lexstring(root->left,ans);
        lexstring(root->right,ans);
    }
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        lexstring(root,s);
      
        return *min_element(str.begin(),str.end());
    }
};