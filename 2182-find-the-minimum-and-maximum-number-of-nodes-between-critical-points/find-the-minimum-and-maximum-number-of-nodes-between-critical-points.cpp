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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* nextnode=NULL;
        if(curr->next!=NULL)
        {
            nextnode=curr->next;
        }
        int i=2;
        vector<int>critical;
        while(nextnode)
        {
            if((curr->val>prev->val && curr->val>nextnode->val)||(curr->val<prev->val && curr->val<nextnode->val))
            {
                critical.push_back(i);
            }
            prev=prev->next;
            curr=curr->next;
            nextnode=nextnode->next;
            i++;
        }
       if(critical.size()<=1)return {-1,-1};
       int maximum_distance=critical[critical.size()-1]-critical[0];
       int minimum_distance=INT_MAX;
       for(int i=0;i<critical.size()-1;i++)
       {
            minimum_distance=min(minimum_distance,(critical[i+1]-critical[i]));
       }
       return {minimum_distance,maximum_distance};



    }
};