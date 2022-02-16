//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(int node,vector<int>& visited,vector<int>adj[],vector<int>& incall)
    {
        visited[node]=1;
        incall[node]=1;
        for(auto it :adj[node])
        {
            if(visited[it]==0)
            {
                if(dfs(it,visited,adj,incall))
                return true;
            }else if(incall[it]==1){
                return true;
            }
        }
        incall[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
         vector<int>visited(V,0);
         vector<int>incall(V,0);
        for(int i=0;i<V;i++)
        {
            if(visited[i]==0)
            {
                if(dfs(i,visited,adj,incall))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
