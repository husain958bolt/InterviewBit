/*
N/3 Repeat Number
You're given a read only array of n integers. Find out if any integer occurs more than n/3 times in the array in linear time and constant additional space. If so, return the integer. If not, return -1. If there are multiple solutions, return any one.  Example :
Input : [1 2 3 1 1]
Output : 1 
1 occurs 3 times which is more than 5/3 times. 
*/
int Solution::repeatedNumber(const vector<int> &A) {
    int cand1;
    int cand2;
    int count1= 0;
    int count2= 0;
    for (auto i : A) {
        if (i == cand1)
            count1++;
        else if (i == cand2)
            count2++;
        else if (count1 == 0) {
            cand1 = i;
            count1++;
        }
        else if (count2 == 0) {
            cand2 = i;
            count2++;
        }
        else {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (auto i : A) {
        if (i==cand1)
            count1++;
        if (i==cand2)
            count2++;
    }
    
    if (count1>floor(A.size()/(float)3.0))
        return cand1;
    if (count2>floor(A.size()/(float)3.0))
        return cand2;
    return -1;
}
