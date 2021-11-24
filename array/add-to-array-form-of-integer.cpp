/*
The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

LINK- https://leetcode.com/problems/add-to-array-form-of-integer/
*/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int carry=0;
        for(int i=n-1;i>=0;i--)
        {
            if(carry==0 && k==0)
            {
                return num;
            }
            int j=num[i]+(k%10)+carry;
            k=k/10;
            num[i]=j%10;
            carry=j/10;
        }
        while(k!=0 || carry!=0)
        {
            num.insert(num.begin(),(k%10+carry)%10);
            carry=(k%10+carry)/10;
            k/=10;
        }
        return num;
    }
};
