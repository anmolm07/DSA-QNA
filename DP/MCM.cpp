//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1/


class Solution{
public:

    int dp[101][101];
    
    int helper(int arr[], int  i, int j){
        
        
         if( i >= j) 
         
         {dp[i][j] = 0;
             return dp[i][j];
         }
         
         if(dp[i][j] != -1) 
         return dp[i][j];
         
          int ans = INT_MAX;
          
           for(int k = i;k < j;k++)

       {  int temp = helper(arr,i,k) + helper(arr,k+1,j) +arr[i-1] *arr[k] *arr[j];

        ans = min(ans,temp);
    }
    dp[i][j]= ans;
          
          
    
    return ans;
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        memset(dp,-1,sizeof(dp));
        
        helper(arr,1,N-1);
        
    }
};
