class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty()) return 0;
        int longest = 1;
        int n = nums.size();
        int last_smallest = INT_MIN;
        int cnt = 0;
        for(int i =0;i<n;i++){
            if(nums[i]-1 == last_smallest){
                cnt+=1;
                last_smallest = nums[i];
            }
            else if(nums[i]!=last_smallest){
                cnt = 1;
                last_smallest = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
        
    }
};