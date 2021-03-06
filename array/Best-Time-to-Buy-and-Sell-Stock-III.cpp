/*Problem - You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete at most two transactions.

link- https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/

Solution -
*/
int max(int a,int b){
        return a>b?a:b;
    }
    int min(int a,int b){
        return a<b?a:b;
    }
    int maxProfit(vector<int>& prices) {
       int buy1=INT_MAX,buy2=INT_MAX;
        int profit1=0,profit2=0;
        for(int i=0;i<prices.size();i++)
        {
            buy1=min(buy1,prices[i]);
            profit1=max(profit1,prices[i]-buy1);
            buy2=min(buy2,prices[i]-profit1);
            profit2=max(profit2,prices[i]-buy2);
        }
        
        
        return profit2;
    }
