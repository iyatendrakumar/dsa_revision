class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* curr_root=st.top();
            st.pop();
            if(curr_root){
                st.push(curr_root->left);
                st.push(curr_root->right);
                swap(curr_root->left, curr_root->right);
            }
        }
        return root;
    }
};