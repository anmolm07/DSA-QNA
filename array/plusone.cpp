/*

You are given a large integer represented as an integer array digits, 
where each digits[i] is the ith digit of the integer. 
The digits are ordered from most significant to least significant in left-to-right order.
The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i;
        int carry=1;
        for(i=n-1;i>=0;i--)
        {
            if(carry==0)
                break;
            int j=digits[i]+carry;
            carry=j>=10?1:0;
            j=j%10;
            digits[i]=j;
        }
        if(carry!=0 && i==-1)
            digits.insert(digits.begin(),carry);
        return digits;
        
    }
};
