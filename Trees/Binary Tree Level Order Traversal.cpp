class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> vr;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* front=q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                vr.push_back(front->val);
            }
            v.push_back(vr);
        }
        return v;
    }
};
