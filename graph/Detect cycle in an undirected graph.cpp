class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(int node,int parent,vector<int>& visited,vector<int> adj[]){
        
        visited[node]=1;
        for(auto it :adj[node])
        {
            if(visited[it]==0)
            {
                if(dfs(it,node,visited,adj))
                return true;
            }else if(it !=parent){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
         bool visited[V];
         
          for(int i=0;i<V;i++){
            
            visited[i]=false;
        }
        
        for(int i=0;i<V;i++){
            
            if(visited[i]==0){
                
                if(dfs(i,-1,visited,adj)){
                    
                    return true;
                }
            }
        }
        
        return false;
    }
};
