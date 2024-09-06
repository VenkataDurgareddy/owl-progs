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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int>m;
        for(auto it:nums)
        {
            m[it]++;
        }
        ListNode* temp=new ListNode(0);
        ListNode* ans=temp;
        ListNode* temp1=head;
        while(temp1!=nullptr)
        {
            if(m[temp1->val]==0)
            {
                temp->next=new ListNode(temp1->val);
                temp=temp->next;
            }
            temp1=temp1->next;
        }
        return ans->next;
    }
};