
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *> st;
        vector<int> inorder;
        TreeNode * node = root;
        while(node!=nullptr || !st.empty()){
            if(node!=NULL){
                st.push(node);
                node = node->left;
            }
            else{
            node = st.top();
            st.pop();
            inorder.push_back(node->val);
            node = node->right;

            }
        }  
        return inorder;
    }
};