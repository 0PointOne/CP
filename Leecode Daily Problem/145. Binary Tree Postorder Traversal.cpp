class Solution {
public:
    void traversal(vector<int>& ans, TreeNode* root){
        if(root == NULL) return;
        traversal(ans, root->left);
        traversal(ans, root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        traversal(ans, root);
        return ans;
    }
};