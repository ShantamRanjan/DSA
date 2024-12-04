#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left, *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
    /* data */
};
node* insertbst(node* root, int val){
    if (root == NULL)
    {
        return new node(val);
        /* code */
    }
    
    if (val<root->data)
    {
        root->left = insertbst(root->left, val);
    }
    else{
        root->right = insertbst(root->right, val);
    }
    return root;
}
void inorder(node* root){
    if (root==NULL)
    {
        return;
        /* code */
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
node* deleteinbst(node* root, int key){
    if (key<root->data)
    {
        root->left = deleteinbst(root->left,key);
        /* code */
    }
    if (key>root->data)
    {
        root->right = deleteinbst(root->right,key);
        /* code */
    }
    else{
        if (root->left == NULL)
        {
            node* temp = root->right;
            free(root);
            /* code */
        }
        else if (root->right==NULL)
        {
            node* temp = root->left;
            free(root);
            /* code */
        }
        
        
    }
}
int main(){
    node* root = NULL;
    root = insertbst(root,5);
    insertbst(root,1);
    insertbst(root,3);
    insertbst(root,4);
    insertbst(root,2);
    insertbst(root,7);
    inorder(root);
    cout<<endl;
    return 0;
}
