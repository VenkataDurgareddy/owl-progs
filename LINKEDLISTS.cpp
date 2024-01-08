#include<bits/stdc++.h>
using namespace std;
//Declaring and creating the node
class Node{
    public:
        int data;
        Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;
    }
        
        
    
};
//creating the linkedlist and the palce where all the operations are written
class Linkedlist{
    private:
        Node *head;
    public:
        Linkedlist()
        {
            this->head=nullptr;
        }
    //inserting the node at begining
    void insertnodeatbegin(int data)
    {
        Node *newnode=new Node(data);
        newnode->next=head;
        head=newnode;
    }
    //insert the node at end
    void insertatend(int data)
    {
        Node *newnode=new Node(data);
        Node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void printlinkedlist()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main()
{
   Linkedlist li;
   li.insertnodeatbegin(40);
   li.insertnodeatbegin(46);
   li.insertatend(34);
   li.printlinkedlist();
}
