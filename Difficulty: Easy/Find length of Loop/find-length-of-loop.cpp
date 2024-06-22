//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}

// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    // Code here
    Node* slowptr=head;
    Node* fastptr=head;
    while(fastptr!=NULL and fastptr->next!=NULL)
    {
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;
        if(slowptr==fastptr)
        {
           break;
        }
    }
    int cnt=1;
    if(slowptr!=NULL && fastptr!=NULL && fastptr->next!=NULL)
    {
            slowptr=head;
            while(slowptr!=fastptr)
            {
                slowptr=slowptr->next;
                fastptr=fastptr->next;
            }
        slowptr=slowptr->next;
        while(slowptr!=fastptr)
        {
            cnt++;
            slowptr=slowptr->next;
        }
    }
    else{
        return 0;
    }
    return cnt;
    
}