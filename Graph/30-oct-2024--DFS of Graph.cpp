/*

https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

DFS of Graph



*/

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        
       vector<int>vis(n,0);
        int start=0;
        vector<int >ls;
        dfs(start,adj,vis,ls);
        return ls;
        
    }
    private:
    void dfs(int node , vector<vector<int>>&adj,vector<int>&vis,vector<int>&ls){
        vis[node]=1;
        ls.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(it , adj, vis , ls);
            }
        }
    }
};
