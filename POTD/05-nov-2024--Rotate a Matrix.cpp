/*
Link:
https://www.geeksforgeeks.org/problems/rotate-a-2d-array-without-using-extra-space1004/1

prob:
Rotate a Matrix



*/
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	     
        vector<vector<int>> ans(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
           for (int j = 0; j < n; j++) {
              ans[i][j] = arr[j][n - 1 - i];
            }
         }

    arr = ans;
	}

};
