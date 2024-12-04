#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class queue{
    node* front;
    node* back;
    public:
    queue(int val){
        front = NULL;
        back = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if (front==NULL)
        {
            front= n;
            back = n;
            /* code */
        }
        
        back->next=n;
        back=n;
    }
    void pop(){
        if (front == NULL)
        {
            /* code */cout<<"QUEUE UNDERFLOW";
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
        
    }
    int peek(){
        if (front == NULL)
        {
            /* code */cout<<"QUEUE UNDERFLOW";
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};