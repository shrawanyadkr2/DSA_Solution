/*
link:
https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1


BFS of graph


*/

class Solution {
  public:
  
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        vector<int>bfs;
        
        // Code here
        int n=adj.size();
        queue<int >q;
        vector<int >vis(n,0);
        q.push(0);
        vis[0]=1;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};
