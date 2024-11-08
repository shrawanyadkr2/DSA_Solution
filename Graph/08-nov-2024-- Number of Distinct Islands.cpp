/*

Link:
https://www.geeksforgeeks.org/problems/number-of-distinct-islands/0

prob:

Number of Distinct Islands



*/
class Solution {
  private:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid,
    vector<pair<int , int>>&vec,int baserow,int basecol){
        
        int n=grid.size();
        int m=grid[0].size();
        
        vis[row][col]=1;
        vec.push_back({row-baserow,col-basecol});
        
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};
        
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid,vec,baserow,basecol);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        //make a vis array initially mark as 0's
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        set<vector<pair<int,int>>>st;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>>vec;
                    dfs(i,j,vis,grid,vec,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};
