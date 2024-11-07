
/*
Link:
https://leetcode.com/problems/flood-fill/

prob:
Flood Fill


*/

class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>&image,vector<vector<int>>&ans,int iniColor,int color){
        ans[row][col]=color;

        int n=image.size();
        int m=image[0].size();

        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};

        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=color)
            {
                dfs(nrow,ncol,image,ans,iniColor,color);
            }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        /*
            Algorithm to find the ans
            1. we will not alter the given data
                a. so we will create a ans matrix to store the output matrix
            2. call dfs to color all the connected node if it is same color of the input one 

        */
        int iniColor=image[sr][sc];
        vector<vector<int>>ans=image;
        dfs(sr,sc,image,ans,iniColor,color);
        return ans;

    }
};
