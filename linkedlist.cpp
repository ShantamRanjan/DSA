#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    
    node(int val) {
        data = val;  // Corrected assignment
        next = NULL;
    }
};

void insertattail(node *&head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertathead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}
bool search(node* head, int key){
    node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
            /* code */
        }
        temp=temp->next;
        /* code */
    }
    return false;
}
void deletion(node* &head,int val){
    node* temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;
        /* code */
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void deleteathead(node* &head){
    node *todelete=head;
    head = head->next;
    delete todelete;
}

int main() {
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    display(head);
    return 0;
}
