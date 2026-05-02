class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int scol = 0;
        int ecol = n - 1;
        int srow = 0;
        int erow = n - 1;
        int num = 1;
        while (num <= n * n) {
            for (int i = scol; i <= ecol; i++) {
                ans[srow][i] = num++;
            }
            srow++;
            for (int i = srow; i <= erow; i++) {
                ans[i][ecol] = num++;
            }
            ecol--;
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    ans[erow][i] = num++;
                }
                erow--;
            }
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans[i][scol] = num++;
                }
                scol++;
            }
        }
        return ans;
    }
};