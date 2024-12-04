#include<iostream>
using namespace std;
class node{
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
    queue(){
        front = NULL;
        back = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if (front==NULL)
        {
            front = n;
            back = n;
            return;
            /* code */
        }
        back->next=n;
        back = n;
        
    }
    void pop(){
        if (front==NULL)
        {
        cout<<"queue is empty"<<endl;
        return;
            /* code */
        }
        node* todelete = front;
        front = front->next;
        delete todelete;

    }
    int peek(){
        if (front==NULL)
        {
        cout<<"queue is empty"<<endl;
        return;
            /* code */
        }
        return front->data;       
    }
};