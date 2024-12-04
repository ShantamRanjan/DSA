#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
    /* data */
};
void traversal(struct node * head){
    struct node *ptr = head;while (ptr!=head)
    printf("%d\n",ptr->data);
    ptr = ptr->next;
    {
        ptr = ptr->next;
        printf("%d\n",ptr->data);
        /* code */
    }
    
}
struct node * insertatfirst(struct node * head, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
    struct node * p = head->next;

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
    head = insertatfirst(head,80);
    traversal(head);
    return 0;
}
