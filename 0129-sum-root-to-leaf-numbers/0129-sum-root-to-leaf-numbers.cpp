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
    int sum =0;
    void solve(TreeNode* r,int st)
    {
        if(r==NULL)
            return;
        int d=st*10+r->val;
        if(r->left==NULL&&r->right==NULL)
            sum+=d;
        solve(r->left,d);
        solve(r->right,d);
    }
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return sum;
    }
};