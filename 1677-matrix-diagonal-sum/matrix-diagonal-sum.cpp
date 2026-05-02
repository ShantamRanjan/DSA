class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                if (i == j) {
                    int sum1 = mat[i][j];
                    sum += sum1;
                } else if (j == n - i - 1) {
                    int sum2 = mat[i][j];
                    sum += sum2;
                }
            }
        }
        return sum;
    }
};