/* Q-Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.


Example 1:

Input:
N = 11 
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
Output: 3 

Link - https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
 
*/ 


 int minJumps(int arr[], int n){
    if(arr[0]==0) return -1;
    
    int steps=arr[0];
    int maxReach=arr[0];
    int jumps=1;
    for(int i=1;i<n;i++){
        if(i==n-1)
        return jumps;
        
        maxReach=max(maxReach,arr[i]+i);
        steps--;
        if(steps==0){
            jumps++;
            if(i==maxReach)
            return -1;
            
            steps=maxReach-i;
            
        }
        
    }
      
    }
