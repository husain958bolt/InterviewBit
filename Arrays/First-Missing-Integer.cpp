/*
First Missing Integer
Given an unsorted integer array, find the first missing positive integer. 
Example: Given [1,2,0] return 3, [3,4,-1,1] return 2,  [-8, -7, -6] returns 1  
Your algorithm should run in O(n) time and use constant space.
*/

int Solution::firstMissingPositive(vector<int> &A) {
    
    int i=0;
    int t;
    
    while (i<A.size()) {
        while ((A[i] != i+1) && A[i]>=1 && A[i]<=A.size() && A[i] != A[A[i]-1]) {
            t = A[A[i]-1];
            A[A[i]-1] = A[i];
            A[i] = t;
        }
        ++i;
    }
    i=0;
    while (i<A.size() && A[i]==i+1)
        ++i;
    return i+1;
}
