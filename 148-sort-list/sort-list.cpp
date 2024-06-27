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
    ListNode* findmiddle(ListNode* head)
    {
        ListNode* slowptr=head;
        ListNode* fastptr=head->next;
        while(fastptr!=nullptr && fastptr->next!=nullptr)
        {
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
        }
        return slowptr;
    }
    ListNode* mergesort(ListNode* leftnode,ListNode* rightnode)
    {
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(leftnode!=nullptr && rightnode!=nullptr)
        {
            if(leftnode->val<rightnode->val)
            {
                temp->next=leftnode;
                leftnode=leftnode->next;
            }
            else 
            {
                temp->next=rightnode;
                rightnode=rightnode->next;
            }
            temp=temp->next;
            
        }
        if(leftnode){
            temp->next=leftnode;
        }
        if(rightnode)
        {
            temp->next=rightnode;
        }
        return dummy->next;
    }
    ListNode* merge(ListNode* head)
    {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode* middle=findmiddle(head);
        ListNode* left=head;
        ListNode* right=middle->next;
        middle->next=nullptr;
        left=merge(left);
        right=merge(right);
        return mergesort(left,right);
    }
    ListNode* sortList(ListNode* head) {
      return merge(head);
    }
};