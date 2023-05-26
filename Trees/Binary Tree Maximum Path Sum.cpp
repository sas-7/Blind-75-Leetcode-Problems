class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxm=INT_MIN;
        f(root,maxm);
        return maxm;
    }
    int f(TreeNode*root, int &maxm){
        if(!root) return 0;
        int lt=max(0,f(root->left,maxm));
        int rt=max(0,f(root->right,maxm));
        maxm=max(maxm,lt+rt+root->val);
        return root->val+max(lt,rt);
    }
};
