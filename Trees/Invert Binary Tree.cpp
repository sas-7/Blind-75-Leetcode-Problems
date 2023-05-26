class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        f(root);
        return root;
    }
    void f(TreeNode* root){
        if(!root) return;
        TreeNode*temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        f(root->left);
        f(root->right);
    }
};
