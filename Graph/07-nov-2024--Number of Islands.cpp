
/*
Link:
https://leetcode.com/problems/number-of-islands/

prob:
Number of Islands

*/

class Solution {
private:
    void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>& grid){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            int delRow[]={-1,0,+1,0};
            int delCol[]={0,+1,0,-1};
            for(int i=0;i<4;i++){
                int nrow=row+delRow[i];
                int ncol=col+delCol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m  && 
                !vis[nrow][ncol] && grid[nrow][ncol]=='1'){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        //firstly I have to make vis array
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(grid[row][col]=='1' && !vis[row][col]){
                    bfs(row,col,vis,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
