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
    bool dfs(TreeNode* r)
    {
     if(!r->left&&!r->right)
         return r->val;
       int l=dfs(r->left);
       int ri=dfs(r->right);
        if(r->val==3)
            return (l&ri);
        return (l|ri);
    }
    bool evaluateTree(TreeNode* root) {
        return dfs(root);
    }
};