//https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/

vector<vector<int>> v(V);
for(int i = 0; i < V; i++) {
v[i].push_back(i); //print adjacency list of vertex
for(int j = 0; j < adj[i].size();j++) {
v[i].push_back(adj[i][j]);
}
}
return v;
