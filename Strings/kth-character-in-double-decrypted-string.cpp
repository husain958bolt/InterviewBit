/*
kth character in double decrypted string

Given a String A and an integer B. String A is encoded consisting of lowercase English letters and numbers. A is encoded in a way where repetitions of substrings are represented as substring followed by the count of substrings. For example: if the encrypted string is “ab2cd2” and B=6, so the output will be ‘d’ because the decrypted string is “ababcdababcd” and 4th character is ‘b’. You have to find and return the Bth character in the decrypted string. Note: Frequency of encrypted substring can be of more than one digit. For example, in “ab12c3”, ab is repeated 12 times. No leading 0 is present in the frequency of substring. 

Input Format
The arguments given are string A and integer B.

Output Format
Return the Bth character in the decrypted string.

Constraints
1 <= length of the array <= 10^5
1 < = K < = 10^9

For Example
Input 1:
    A = "ab2c3"
    B = 8
Output 1:
    a
    Decrypted string will be "ababcababcababc" and 'a' is the 8th character.

Input 2:
    A = "x2y3"
    B = 3
Output 2:
    y
    Decrypted string will be "xxyxxyxxy"
*/

struct Alpha {
    char ch;
    int index;
};

string Solution::solve(string A, int B) {
    stack<Alpha> st; 
    int count=0;
    int snum;
    int i=0; 
    while (i<A.length()) {
        while (i<A.length() && A[i]>='a' && A[i]<='z') {
             Alpha X;
             X.ch = A[i];
             X.index = i+1;
             cout<<A[i]<<" "<<i+1<<" "<<count+1<<endl;
             st.push(X);
             i++;
             count++;
        }
        snum=0;
        while (i<A.length() && A[i]>='0' && A[i]<='9')
            snum = (snum*10)+(A[i++]-'0');
        count = count*snum;
        if (count>=B)
            break;
    }
    string res;
    while (!st.empty()) {
        if (B%st.top().index == 0) {
            res.push_back(st.top().ch);
            break;
        }
        B=B%st.top().index;
        st.pop();
    }
    return res;
}
    
    
