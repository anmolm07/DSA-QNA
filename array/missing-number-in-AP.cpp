/*
Given three integers  'A' denoting the first term of an arithmetic sequence , 
'C' denoting the common difference of an arithmetic sequence and an integer 'B'. you need to tell whether 'B' exists in the arithmetic sequence or not.

LINK-https://practice.geeksforgeeks.org/problems/arithmetic-number2815/1

*/

class Solution{
public:
    int inSequence(int A, int B, int C){
        if(!C)
        return A==B;
        int a=(B-A)/C;
        return (B-A)%C==0 && a>=0;
        // code here
    }
};
