class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int row = 0;
        int maxcnt = -1;
        vector<vector<int>> ans;
        for(int i =0;i<n;i++){
            int cnt = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) cnt++;
            }
            if(cnt>maxcnt){
                row = i;
                maxcnt = cnt;
            }
        }
        return {row, maxcnt};
        
    }
};