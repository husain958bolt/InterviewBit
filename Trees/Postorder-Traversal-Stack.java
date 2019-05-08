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
    public ArrayList<Integer> postorderTraversal(TreeNode A) {
        
        ArrayList<Integer> res = new ArrayList<Integer>();
        Stack<TreeNode> s = new Stack<TreeNode>();
        
        s.push(A);
        
        TreeNode prev = null, curr;
        
        while (!s.isEmpty()) {
            
            curr = s.peek();
            
            if (prev == null || prev.left == curr || prev.right == curr) {
                
                if (curr.left != null)
                    s.push(curr.left);
                else if (curr.right != null)
                    s.push(curr.right);
            }
            else if (curr.left == prev) {
                if (curr.right != null)
                    s.push(curr.right);
            }
            else {
                res.add(curr.val);
                s.pop();
            }
            prev = curr;
            
        }
        return res;
    }
}
