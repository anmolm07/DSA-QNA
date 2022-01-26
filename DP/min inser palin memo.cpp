//https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1/

class Solution{
  public:
  
  int dp[1001][1001];
  
 int helper(string a ,string b,int n,int m){
      
      
      if(n==0||m==0){
          
          dp[n][m]=0;
          return dp[n][m];
      }
      
      if(dp[n][m]!=-1){
          
          return dp[n][m];
      }
      
      if(a[n-1]==b[m-1]){
          
          dp[n][m]=1+helper(a,b,n-1,m-1);
      }else
      {
          dp[n][m]=max(helper(a,b,n,m-1),helper(a,b,n-1,m));
      }
      return dp[n][m];
  }
    int countMin(string str){
    //complete the function here
    memset(dp,-1,sizeof(dp));
    string s;
    s=str;
    reverse(str.begin(),str.end());
    int n,m;
    n=str.length();
    m=n;
    int lcs1=helper(str,s,n,m);
    return n-lcs1;
    
    }
};
