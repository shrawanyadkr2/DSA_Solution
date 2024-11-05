/*
Link:
https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1


prob:Rotate by 90 degree




*/
/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(m, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans[j][n - 1 - i] = mat[i][j];
        }
    }

    mat = ans;

}
