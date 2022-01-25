//https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions4610/1/#
int lcs(string s1,string s2 , int m , int n)
{
int t[m+1][n+1];
for(int i=0;i<=m;i++)
{
t[i][0]=0;
}
for(int j=0;j<=n;j++)
{
t[0][j]=0;
}
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++)
{
if(s1[i-1]==s2[j-1])
{
t[i][j]=1+t[i-1][j-1];
}
else
{
t[i][j]=max(t[i-1][j],t[i][j-1]);
}
}
}
return t[m][n];
}
int minDeletions(string str, int n) { 
    //complete the function here 
    
    
    
    
    string s;
    s=str;
    reverse(str.begin(),str.end());
   
    int m=0;
    m=n;
   int lcs1= lcs(str,s,m,n);
    
    
    return n-lcs1;
} 
