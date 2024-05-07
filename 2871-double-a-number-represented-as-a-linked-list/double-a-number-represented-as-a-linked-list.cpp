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
    ListNode* doubleIt(ListNode* head) {
        ListNode* newnode=reverse(head);
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        int carry=0;
        while(newnode!=NULL)
        {
            int mul=newnode->val*2+carry;
            if(mul>=10)
            {
                carry=mul/10;
                temp->next=new ListNode(mul%10);
                temp=temp->next;
            } 
            else{
                carry=0;
                temp->next=new ListNode(mul);
                temp=temp->next;
            }
            newnode=newnode->next;
        }
        if(carry>0)
        {
            temp->next=new ListNode(carry);
        }
        ListNode* ans=reverse(dummy->next);
        return ans;
    }
};