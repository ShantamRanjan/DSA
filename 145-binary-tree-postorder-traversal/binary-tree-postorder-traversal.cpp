/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> postorder;
        TreeNode* node = root;
        TreeNode* lastvisited = nullptr;
        while (node != nullptr || !st.empty()) {
            if (node != NULL) {
                st.push(node);
                node = node->left;
            } else {
                TreeNode* peek = st.top();
                if (peek->right != nullptr && lastvisited != peek->right) {
                    node = peek->right;
                } else {
                    postorder.push_back(peek->val);
                    lastvisited = peek;
                    st.pop();
                }
            }
        }
        return postorder;
    }
};