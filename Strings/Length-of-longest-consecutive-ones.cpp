/*
Length of longest consecutive ones
Given a binary string A. It is allowed to do at most one swap between any 0 and 1. Find and return the length of the longest consecutive 1’s that can be achieved.

Input Format
The only argument given is string A.

Output Format
Return the length of the longest consecutive 1’s that can be achieved.

Constraints
1 <= length of string <= 1000000
A contains only characters 0 and 1.

For Example
Input 1:
    A = "111000"
Output 1:
    3

Input 2:
    A = "111011101"
Output 2:
    7
*/

int Solution::solve(string A) {
    int totalOnes=0;
    for (auto x:A)
        totalOnes += (x=='1')?1:0;
    
    if (totalOnes == 0)
        return 0;
    if (totalOnes == A.length())
        return totalOnes;
    
    int i=0;
    int leftOnes=0;
    int rightOnes=0;
    int maxOnes = 0;
    
    while (i<A.length()) {
        if (A[i] == '1') {
            leftOnes++;
            i++;
        }
        if (A[i] == '0') {
            i++;
            while (i<A.length()) {
                if (A[i]=='1')
                    rightOnes++;
                else
                    break;
                i++;
            }
            maxOnes = max(maxOnes,leftOnes+rightOnes+(totalOnes>(leftOnes+rightOnes)?1:0));
            if (maxOnes == totalOnes)
                return totalOnes;
            leftOnes = rightOnes;
            rightOnes = 0;
        }
    }
    return maxOnes;
}
int Solution::solve(string A) {
    int totalOnes=0;
    for (auto x:A)
        totalOnes += (x=='1')?1:0;
    
    if (totalOnes == 0)
        return 0;
    if (totalOnes == A.length())
        return totalOnes;
    
    int i=0;
    int leftOnes=0;
    int rightOnes=0;
    int maxOnes = 0;
    
    while (i<A.length()) {
        if (A[i] == '1') {
            leftOnes++;
            i++;
        }
        if (A[i] == '0') {
            i++;
            while (i<A.length()) {
                if (A[i]=='1')
                    rightOnes++;
                else
                    break;
                i++;
            }
            maxOnes = max(maxOnes,leftOnes+rightOnes+(totalOnes>(leftOnes+rightOnes)?1:0));
            if (maxOnes == totalOnes)
                return totalOnes;
            leftOnes = rightOnes;
            rightOnes = 0;
        }
    }
    return maxOnes;
}
