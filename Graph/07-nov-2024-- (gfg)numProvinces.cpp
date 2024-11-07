
/*

https://www.geeksforgeeks.org/problems/number-of-provinces/1
prob:numProvinces
*/
class Solution {
 
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        //make the adj list
        vector<int>adjls[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                    
                }
            }
        }
        
        // Now I am here after creating the adjency list
        int vis[V]={0};
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,adjls);
            }
        }
        return cnt;
        
    }
     private:
    void dfs(int node , int vis[], vector<int>adjls[]){
        vis[node]=1;
        for(auto it : adjls[node]){
            if(!vis[it]){
                dfs(it,vis,adjls);
            }
        }
    }
};
