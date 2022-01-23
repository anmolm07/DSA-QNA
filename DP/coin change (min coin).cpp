//https://practice.geeksforgeeks.org/problems/number-of-coins1824/1/

class Solution{

public:
int minCoins(int coins[], int M, int V)
{
// Your code goes here
int dp[M+1][V+1];
for(int i = 0; i <= V; i++) dp[0][i] = INT_MAX-1;
for(int i = 1; i <= M; i++) dp[i][0] = 0;
for(int j = 1; j <= V; j++){
if(j%coins[0] == 0){
dp[1][j] = (j/coins[0]);
}
else{
dp[1][j] = INT_MAX-1;
}
}
for(int i = 2; i <= M; i++){
for(int j = 1; j <= V; j++){
if(coins[i-1] <= j){
dp[i][j] = min(1+dp[i][j-coins[i-1]] , dp[i-1][j]);
}
else{
dp[i][j] = dp[i-1][j];
}
}
}
if(dp[M][V] < INT_MAX-1) return dp[M][V];
else return -1;
}

};
