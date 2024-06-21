/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>mp;
        ListNode* temp=head;
        int i=0;
        while(temp!=NULL)
        {
            if(mp.count(temp))
            {
                return temp;
            }
            else{
                mp[temp]=i;
                i++;
            }
            temp=temp->next;
        }
        return temp;
    }
};