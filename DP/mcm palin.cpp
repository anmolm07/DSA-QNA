//https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1/#
class Solution{
public:
int dp[501][501];
bool ispalin(string &s,int i,int j){
    
    if(i==j)
    return true;
    
    
    while(i<=j){
        
        if(s[i]!=s[j])
        return false;
        j--;
        i++;
    }return true;
}

int helper(string &s,int i,int j){
    
    
    if(i==j or ispalin(s,i,j)){
        
        dp[i][j]=0;
        return dp[i][j];
    }
    
    if(dp[i][j]!=-1){
        
        return dp[i][j];
    }
    
    
    int ans=INT_MAX;
    
    for(int k=i;k<=j-1;k++){
        
        int temp;
        temp=1+helper(s,i,k)+helper(s,k+1,j);
        ans=min(ans,temp);
    }
    
    dp[i][j]=ans;
    return dp[i][j];
    
    
}
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int n=str.length();
        return helper(str,0,n-1);
    }
};
