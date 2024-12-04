#include <iostream>
using namespace std;
#define null 0
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val){
        data = val;
        right = NULL;
        left =  NULL;
    }
    
};
int main(){
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root ->left->right = new node(5);
    cout<<root->data;
    return 0;

}