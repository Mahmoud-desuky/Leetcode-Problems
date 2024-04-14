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
    int solve(TreeNode* r)
    {
        if(r==NULL)
            return 0;
        int sum=0;
        if(r->left!=NULL&&r->left->left==NULL&&r->left->right==NULL)
            sum+=r->left->val;
        
      return sum+solve(r->left)+solve(r->right);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root);
    }
};