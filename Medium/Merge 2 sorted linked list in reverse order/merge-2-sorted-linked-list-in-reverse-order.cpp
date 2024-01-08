//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    Node* reverse(Node *head)
    {
        Node *nextnode=head;
        Node *currentnode=head;
        Node *prevnode=NULL;
        while(nextnode!=NULL)
        {
            nextnode=currentnode->next;
            currentnode->next=prevnode;
            prevnode=currentnode;
            currentnode=nextnode;
        }
        head=prevnode;
        return head;
    }
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node *ptr1=node1;
        Node *ptr2=node2;
        Node *dummy =new Node;
        Node *ptr3=dummy;
        while(ptr1!=NULL and ptr2!=NULL)
        {
            if(ptr1->data<=ptr2->data)
            {
                ptr3->next=ptr1;
                ptr1=ptr1->next;
            }
            else if(ptr1->data>ptr2->data)
            {
                ptr3->next=ptr2;
                ptr2=ptr2->next;
            }
            ptr3=ptr3->next;
        }
        while(ptr1!=NULL)
        {
            ptr3->next=ptr1;
            ptr3=ptr3->next;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL)
        {
            ptr3->next=ptr2;
            ptr3=ptr3->next;
            ptr2=ptr2->next;
        }
        return reverse(dummy->next);
        
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends