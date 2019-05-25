/*
N/3 Repeat Number
You're given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space. If so, return the integer. If not, return -1. If there are multiple solutions, return any one.  Example :
Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times. 
*/

public class Solution {
    // DO NOT MODIFY THE LIST
    public int repeatedNumber(final List<Integer> a) {
        int i;
        int cand1=0;
        int cand2=0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for (i=0; i<a.size(); i++) {
            if (cand1 == a.get(i))
                ++cnt1;
            else if (cand2 == a.get(i))
                ++cnt2;
            else if (cnt1 == 0) {
                cand1 = a.get(i);
                ++cnt1;
            }
            else if (cnt2 == 0) {
                cand2 = a.get(i);
                ++cnt2;
            }
            
            else {
                --cnt1;
                --cnt2;
            }
        }
        cnt1= 0;
        cnt2= 0;
        for (i=0; i<a.size(); i++) {
            if (a.get(i) == cand1)
                ++cnt1;
            if (a.get(i) == cand2)
                ++cnt2;
        }
        //System.out.println(cand1+","+cnt1+" "+cand2+","+cnt2);
        if (cnt1 > (int)(a.size()/3.0))
            return cand1;
        if (cnt2 > (int)(a.size()/3.0))
            return cand2;
        return -1;
    }
}
