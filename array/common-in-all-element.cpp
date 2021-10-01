/*

Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.
Note: can you take care of the duplicates without using any additional Data Structure?

Link - https://practice.geeksforgeeks.org/problems/common-elements1132/1
*/

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>res;
            int i=0,j=0,k=0;
            int prev1=INT_MIN,prev2=INT_MIN,prev3=INT_MIN;
            while(i<n1 && j<n2 && k<n3)
            {
                while(A[i]==prev1 &&i<n1)
                i++;
                while(B[j]==prev2 && j<n2)
                j++;
                while(C[k]==prev3 && k<n3)
                k++;
                
                if(A[i]==B[j] && B[j]==C[k])
                {   
                    res.push_back(A[i]);
                    prev1=prev2=prev3=A[i];
                    i++,j++,k++;
                }
                else if(A[i]<B[j])
                {
                    prev1=A[i];
                    i++;
                }
                else if(B[j]<C[k])
                {
                    prev2=B[j];
                    j++;
                }
                else
                {
                    prev3=C[k];
                    k++;
                }
            }
            if(res.size()==0)
            res.push_back(-1);
            return res;
            //code here.
        }

};
