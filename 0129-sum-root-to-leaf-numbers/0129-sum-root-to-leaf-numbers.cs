/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    int sum=0;
    public void solve(TreeNode r,int l)
    {
        if(r==null)
            return;
        int s=l*10+r.val;
        if(r.left==null&&r.right==null)
            sum+=s;
        solve(r.left,s);
        solve(r.right,s);
    }
    public int SumNumbers(TreeNode root) {
        solve(root,0);
        return sum;
    }
}