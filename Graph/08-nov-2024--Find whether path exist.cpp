/*
Link:
https://www.geeksforgeeks.org/problems/find-whether-path-exist5238/1


prob:
Find whether path exist


*/
class Solution
{
    private:
    
    bool dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&grid){
        vis[row][col]=1;
        int n=grid.size();
        int m=grid[0].size();
        
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};
        
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]!=0 ){
                if(grid[nrow][ncol]==3){
                    if(dfs(nrow,ncol,vis,grid)==true){
                        return true;
                    }
                }
                else if(grid[nrow][ncol]==2){
                    return true;
                }
            }
        }
        return false;
    }
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    if(dfs(i,j,vis,grid)==true){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
