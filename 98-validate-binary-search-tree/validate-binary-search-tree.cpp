/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorder;
    void getinorder(TreeNode * root){
        if(root == NULL) return;
        getinorder(root->left);
        inorder.push_back(root->val);
        getinorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        getinorder(root);
        for(int i = 1; i<inorder.size(); i++){
            if(inorder[i]<=inorder[i-1]) return false;
        }
        return true;
    }
};