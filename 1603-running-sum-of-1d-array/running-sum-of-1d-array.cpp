class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                ans.push_back(nums[i]);
                sum+=nums[i];
            } else if (i > 0) {
                sum += nums[i];
                ans.push_back(sum);
            }
        }
        return ans;
    }
};