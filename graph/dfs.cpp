//https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1 
void  dfs(vector<int> adj[],int s,bool visited[],vector<int> &res){
            
            visited[s]=true;
            res.push_back(s);
            for(int x:adj[s]){
                
                if(visited[x]==false){
                    
                    dfs(adj,x,visited,res);
                }
            }
            
        }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
         bool visited[V];
    vector<int> res;
        
        
        for(int i=0;i<V;i++){
            
            visited[i]=false;
        }
        
        dfs(adj,0,visited,res);
        return res;
    }
};
