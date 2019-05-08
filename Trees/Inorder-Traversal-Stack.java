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
    public ArrayList<Integer> inorderTraversal(TreeNode A) {
        
        ArrayList<Integer> res = new ArrayList<Integer>();
        Stack<TreeNode> st = new Stack<TreeNode>();
        
        TreeNode t = A;
        
        while (t != null) {
            st.push(t);
            t = t.left;
        }
        
        while (!st.isEmpty()) {
            
            t = st.pop();
            
            res.add(t.val);
            
            t = t.right;
            
            while (t != null) {
                st.push(t);
                t = t.left;
            }
            
        }
        return res;
    }
}
