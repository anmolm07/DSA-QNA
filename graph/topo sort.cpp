//https://practice.geeksforgeeks.org/problems/topological-sort/1/#
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void dfs(int node,vector<int> adj[],vector<int>& visited,vector<int>& ans){
	    
	    visited[node]=1;
	    
	    for(auto it:adj[node]){
	        
	        if(visited[it]==0)
	        dfs(it,adj,visited,ans);
	    }
	     ans.push_back(node);
	    
	    
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> ans;
	    
	    vector<int> visited(V,0);
	    
	    for(int i=0;i<V;i++){
	        
	        if(visited[i]==0)
	        {
	            dfs(i,adj,visited,ans);
	        }
	    }
	     reverse(ans.begin(),ans.end());
	    return ans;
	}
};
