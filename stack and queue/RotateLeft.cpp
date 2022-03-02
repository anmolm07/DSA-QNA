void RotateLeft(vector<int>&v,int n,int d)
{
    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d , v.end());
    reverse(v.begin(),v.end());

     for(int i = 0 ; i < n ; i++)
     {
         cout<<v[i]<<" ";
      }

}
