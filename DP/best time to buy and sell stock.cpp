//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution {
public:
    int maxProfit(vector<int> prices)
  {
    int min=INT_MAX;
        int max=0;
        
        for (int i=0;i<prices.size();i++){
            
            if(prices[i]<min)
                min=prices[i];
            
            else if(prices[i]-min>max)
                max=prices[i]-min;
        }
   
    return max;
  }
};
