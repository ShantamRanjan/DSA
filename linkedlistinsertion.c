#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node * insertatfirst(struct node * head,int data){
    struct node * ptr  = (struct node *) malloc(sizeof(struct node));
    ptr -> next = head;
    ptr ->data = data;
    return ptr;
}
void traversal(struct node* ptr ){
    while (ptr!=NULL)
    {
    printf("%d\n", ptr->data);
    ptr = ptr->next;
    }
}
struct node * insertatindex(struct node * head,int data, int index){
    struct node * ptr  = (struct node *) malloc(sizeof(struct node));
    struct node * p =head;
    int i = 0 ;
    while (i!=index-1)
    {
        p = p->next;
        i++;
        /* code */
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    
}
struct node * insertatend(struct node * head,int data){
    struct node * ptr  = (struct node *) malloc(sizeof(struct node));
    ptr ->data = data;
    struct node * p = head;
    while (p->next!=NULL)
    {
        p = p->next;

        /* code */
    }
    p->next = ptr;
    ptr->next = NULL;
    
    return head;
}
int main(){
     struct node * head;
    struct node * second;
    struct node * third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next=NULL;
    traversal(head);
    head = insertatfirst(head,56);
    traversal(head);
    head = insertatindex(head,80,3);
    traversal(head);
    head = insertatend(head,88);
    traversal(head);
    return 0;
}
