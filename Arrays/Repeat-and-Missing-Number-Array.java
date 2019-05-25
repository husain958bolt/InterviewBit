/*
Repeat and Missing Number Array
You are given a read only array of n integers from 1 to n.  Each integer appears exactly once except A which appears twice and B which is missing. Return A and B.  Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? Note that in your output A should precede B.  Example:
Input:[3 1 2 5 3] 

Output:[3, 4] 

A = 3, B = 4
*/

public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public ArrayList<Integer> repeatedNumber(final List<Integer> A) {
        ArrayList<Integer> res = new ArrayList<Integer>();
        long n = A.size();
        long sumOfN = n*(n+1)/2;
        long sqSumOfN = n*(n+1)*(2*n+1)/6;
        long sumOfAr = 0;
        long sqSumOfAr = 0;
        int i;
        for(i=0; i<n; i++) {
            sumOfAr += (long)A.get(i);
            sqSumOfAr += (long)(Math.pow(A.get(i),2));
        }
        //System.out.println(sumOfN+" "+sumOfAr+" "+sqSumOfN+" "+sqSumOfAr);
        int x;
        int y;
        
        long diff = sumOfN - sumOfAr;
        
        long sum = (sqSumOfN - sqSumOfAr)/diff;
        //System.out.println(diff+" "+sum);
        x = (int)((diff+sum)/2);
        y = (int)((sum-diff)/2);
        
        res.add(y);
        res.add(x);
        return res;
    }
}
