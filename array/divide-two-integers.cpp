/*
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range:
[−231, 231 − 1]. For this problem,
if the quotient is strictly greater than 231 - 1, 
then return 231 - 1, and if the quotient is strictly less than -231, then return -231.

Link - https://leetcode.com/problems/divide-two-integers/

*/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend== 1<<31 && divisor==-1)
            return INT_MAX;
        int sign = ((dividend < 0) ^(divisor < 0)) ? -1 : 1;
        dividend = abs(dividend);
        long long div = abs(divisor);
        long long  quotient = 0, temp = 0;
        for (int i = 31; i >= 0; --i) {
 
            if (temp + (div << i) <= dividend) {
                temp += div << i;
                quotient |= 1LL << i;
                
            }
            
        }
        if(sign==-1) quotient=-quotient;
   
        return quotient;
    }
};
