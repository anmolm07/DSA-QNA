//https://practice.geeksforgeeks.org/problems/bipartite-graph/1/#

class Solution {
public:
bool dfs(int V,int c,vector<int>& visited,vector<int> adj[]){
    
    
    if(visited[V]!=-1 and visited[V]!=c)
    return false;
    
    visited[V]=c;
    
    bool ans=true;
    
     for(auto it :adj[V]){
         
         if(visited[it]==-1){
             
             ans =dfs(it,1-c,visited,adj);
         }
         
         if(visited[it]!=-1 and visited[it]!=1-c)
         {
             return false;
         }
         
         if(!ans){
             return false;
         }
     }
     
     return true;
    
}
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> visited(V,-1);
	    
	   for(int i=0;i<V;i++)
	    {
	        if(visited[i]==-1)
	        {
	            if(!dfs(i,1,visited,adj))
	            {
	                return false;
	            }
	        }
	    }
	    return true;
	}

};
