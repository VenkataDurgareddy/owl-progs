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
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slowptr=head;
        ListNode* fastptr=head;
        while(fastptr!=NULL && fastptr->next!=NULL)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        ListNode* revptr=reverse(slowptr);
        while(head!=revptr && revptr!=NULL)
        {
            if(head->val!=revptr->val)
            {
                return false;
            }
            head=head->next;
            revptr=revptr->next;
        }
        return true;
    }
};