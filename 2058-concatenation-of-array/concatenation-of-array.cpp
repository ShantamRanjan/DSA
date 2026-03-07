class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        vector<int> final_ans;
        for(int i = 0 ; i<n; i++ ){
            ans.push_back(nums[i]);
        }
        ans.insert(ans.end(), nums.begin(), nums.end());
        return ans;
        
    }
};