/*problem- Given an array arr[] of N non-negative integers representing the height of blocks. 
If width of each block is 1, 
compute how much water can be trapped between the blocks during the rainy season. 

link -https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

solution -
*/
long long trappingWater(int arr[], int n){
        int lmax=INT_MIN;
        int rmax=INT_MIN;
        int i=0;
        int j=n-1;
        long long result=0;
        while(i<=j)
        {
            if(arr[i]<arr[j])
            {
                if(lmax<arr[i])
                lmax=arr[i];
                else
                result+=lmax-arr[i];
                i++;
            }
            else{
                if(rmax<arr[j])
                rmax=arr[j];
                else
                result+=rmax-arr[j];
                j--;
            }
        }
        return result;
    }
};
