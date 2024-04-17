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
    string BFS(TreeNode* r)
    {
        queue<pair<TreeNode*,string>>q;
        string x="";
        q.push({r,x});
        vector<string>ans;
        while(!q.empty())
        {
            auto [node,st]=q.front();
            q.pop();
            if(node->left==NULL&&node->right==NULL)
            {
                st+=char(node->val+'a');
                reverse(st.begin(),st.end());
                ans.push_back(st);
            }
            if(node->left)
                q.push({node->left,(st+char(node->val+'a'))});
            if(node->right)
                q.push({node->right,(st+char(node->val+'a'))});
        }
        sort(ans.begin(),ans.end());
        return ans[0];
        
    }
    string smallestFromLeaf(TreeNode* root) {
        return BFS(root);
    }
};