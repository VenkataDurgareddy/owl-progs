Process
===================
  consider the stack place the root node first in the stack remove the top of the stack and insert first the rightnode and after the lastnode

program
=======================
  /************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
void preorder(TreeNode<int>*root,vector<int>&ans)
{
    stack<TreeNode<int>*>s;
    s.push(root);
    while(!s.empty())
    {
        TreeNode<int>* curr=s.top();
        ans.push_back(curr->data);
        s.pop();
        if(curr->right!=NULL)
        {
            s.push(curr->right);
        }
        if(curr->left!=NULL)
        {
            s.push(curr->left);
        }
    }
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>ans;
    preorder(root,ans);
    return ans;
}
