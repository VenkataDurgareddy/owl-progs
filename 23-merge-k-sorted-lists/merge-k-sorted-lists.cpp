/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<int,vector<int>,greater<int>>pq; 
       ListNode* ans=new ListNode();
       for(auto it:lists)
       {
        while(it!=NULL)
        {
            pq.push(it->val);
            it=it->next;
        }
       }
       ListNode* current=ans;
       while(!pq.empty())
       {
           current->next=new ListNode(pq.top());
           current=current->next;
           pq.pop(); 
       }
       return ans->next;
    }
};