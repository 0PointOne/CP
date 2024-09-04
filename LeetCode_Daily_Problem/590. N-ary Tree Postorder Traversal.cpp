class Solution {
public:
    void traversal(vector<int>& ans, Node* root){
        if(root == NULL) return;
        for(auto N: root->children)  traversal(ans, N);
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        traversal(ans, root);
        return ans;
    }
};