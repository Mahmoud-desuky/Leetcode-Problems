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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        map<int,long long>mp;
        while(!q.empty())
        {
            pair<TreeNode*,int>p=q.front();
            q.pop();
            mp[p.second]+=p.first->val;
            if(p.first->left!=nullptr)
                q.push({p.first->left,p.second+1});
            
            if(p.first->right!=nullptr)
                q.push({p.first->right,p.second+1});
        }
        vector<long long>v;
        for(auto [l,r]:mp)
        {
            v.push_back(r);
        }
        sort(v.rbegin(),v.rend());
         if(k>v.size())
             return -1;
        return v[k-1];
    }
};