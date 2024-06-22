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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        //Declaring map for storing vertix and level and node value;
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*,pair<int,int>>>qp;
        qp.push({root,{0,0}});
        while(!qp.empty())
        {
            auto curr=qp.front();
            qp.pop();
            TreeNode* temp=curr.first;
            int currlevel=curr.second.first;
            int currvertex=curr.second.second;
            mp[currvertex][currlevel].insert(temp->val);
            if(temp->left!=nullptr)
            {
                qp.push({temp->left,{currlevel+1,currvertex-1}});
            }
            if(temp->right!=nullptr)
            {
                qp.push({temp->right,{currlevel+1,currvertex+1}});
            }
            
        }
        vector<vector<int>>ans;
        for(auto it:mp)
        {
              vector<int>v;
            for(auto it1:it.second)
            {
                  
                        v.insert(v.end(),it1.second.begin(),it1.second.end());
            }
                ans.push_back(v);
        }
        return ans;
    }
};