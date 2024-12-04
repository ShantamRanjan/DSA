#include<iostream>
using namespace std;
class node
{
private:
    /* data */
public:
    node* next;
    node* prev;
    int data;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertattail(node* &head, int val){
    node* n= new node (val);
    node* temp = head;
    if (head == NULL)
    {
        insertathead(head,val);
        return;
        /* code */
    }
    
    while (temp->next=NULL)
    {
        /* code */
        temp = temp->next;
    }
    temp->next=n;
    n->prev=temp;
    
}
void insertathead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    head->prev = n;
    head = n;
}
void display(node* head, int val){
    node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;   /* code */
    }
    
}
void deletion(node* &head,int pos){
    node* temp=head;
    int count = 1;
    while (temp!=NULL && count!=pos)
    {
        temp = temp->next;
        count++;
        /* code */
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    
}

