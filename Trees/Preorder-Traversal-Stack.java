/**
 * Definition for binary tree
 * class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) {
 *      val = x;
 *      left=null;
 *      right=null;
 *     }
 * }
 */
public class Solution {
    public ArrayList<Integer> preorderTraversal(TreeNode A) {
        
        ArrayList<Integer> res = new ArrayList<Integer>();
        Stack<TreeNode> s = new Stack<TreeNode>();
        
        if (A==null) {
            return res;
        }
        
        s.push(A);
        
        while (!s.isEmpty()) {
            
            TreeNode temp = s.pop();
            res.add(temp.val);
            
            if (temp.right!=null) {
                s.push(temp.right);
            }
            
            if (temp.left!=null) {
                s.push(temp.left);
            }
        }
        
        return res;
        
    }
}
