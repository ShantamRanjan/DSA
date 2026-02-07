  class Solution {
  public:
      vector<int> preorderTraversal(TreeNode* root) {
        if(root == nullptr) return{};
        vector<int> arr;
        arr.push_back(root->val);
        vector<int> left = preorderTraversal(root->left);
        
        vector<int> right = preorderTraversal(root->right);
        arr.insert(arr.end(),left.begin(),left.end());
        arr.insert(arr.end(),right.begin(),right.end());
        return arr;
      }
  };