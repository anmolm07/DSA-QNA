//https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1/#
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    { 
        int dp[N+1][W+1];
        
        for(int i=0;i<=N;i++)
        dp[i][0]=0;
        
        for(int j=0;j<=W;j++)
        dp[0][j]=0;
        
        
        for(int i=1;i<=N;i++){
            
            for(int j=1;j<=W;j++){
                
                
                if(wt[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);}
                
                else 
                
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        
        return dp[N][W];
        // code here
    }
};
