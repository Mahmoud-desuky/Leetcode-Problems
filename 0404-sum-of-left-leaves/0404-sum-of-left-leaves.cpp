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
    int sum=0;
    void solve(TreeNode* r)
    {
        if(r->left==NULL&&r->right==NULL)
            return;
        if(r->left!=NULL&&r->left->left==NULL&&r->left->right==NULL)
            sum+=r->left->val;
        
        if(r->left!=NULL)
         solve(r->left);
        if(r->right!=NULL)
        solve(r->right);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        solve(root);
        return sum;
    }
};