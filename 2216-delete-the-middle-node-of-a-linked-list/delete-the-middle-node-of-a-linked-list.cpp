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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* slowptr=head;
        ListNode* fastptr=head;
        while(fastptr!=nullptr && fastptr->next!=nullptr)
        {
            prev=slowptr;
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        if(prev!=nullptr)
        {
        prev->next=slowptr->next;
        delete slowptr;
        }
        else{
            return head->next;
        }
        return head;
    }
};