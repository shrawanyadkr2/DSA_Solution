/*
Link:

https://leetcode.com/problems/number-of-provinces/

prob:Number of Provinces

*/

class Solution {
private:
    void dfs(vector<int>&vis,vector<int>adjls[],int node){
        //mark the node visiste
        vis[node]=1;
        for(auto it:adjls[node]){
            if(!vis[it]){
                dfs(vis,adjls,it);
            }

        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        //adjency list is not given
        int V=isConnected.size();
        vector<int>adjls[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[i].push_back(j);
                }
            }
        }
        //make the visited array
       vector<int> vis(V, 0);
        int cnt=0;

        //go for the 
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(vis,adjls,i);
            }
        }
        return cnt;

    }
};
