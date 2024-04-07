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
    bool valid(TreeNode* temp,long long a,long long b)
    {
        if(temp==NULL)
            return true;
        if(a<temp->val&&b>temp->val)
            return valid(temp->left,a,temp->val)&&valid(temp->right,temp->val,b);
        return false;
    }
public:
    bool isValidBST(TreeNode* root) {
        return valid(root,LLONG_MIN,LLONG_MAX);
    }
};