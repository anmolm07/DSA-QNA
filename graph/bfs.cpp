//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
   
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        bool visited[V];
        vector<int> res;
        queue<int> q;
         for(int i=0;i<V;i++)
        visited[i]=false;
        visited[0]=true;
        q.push(0);
        
        while(!q.empty())
{
int x=q.front();
res.push_back(x);
q.pop();
for(auto i:adj[x])
{
if(!visited[i])
{
visited[i]=true;
q.push(i);
}
}
        
}        
       
        
        
        return res;
    }
};
