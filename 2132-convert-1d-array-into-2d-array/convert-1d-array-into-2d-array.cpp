class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int x = original.size();
        if(x!=m*n) return {};
        int idx = 0;
        vector<vector<int>> ans(m, vector<int>(n));
        for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j] = original[idx++];
            }
        }
        return ans;
        
    }
};