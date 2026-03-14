class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        bool split = true;
        int n = nums.size();
        int mid = n/2;
        vector<int> arr1;
        vector<int> arr2;
        unordered_map<int,int> freq;
        for(int i=0; i<mid;i++){
            arr1.push_back(nums[i]);
            freq[nums[i]]++;
            if(freq[nums[i]]>2) return false;
        }
        for(int j=mid;j<n;j++){
            arr2.push_back(nums[j]);
            freq[nums[j]]++;
            if(freq[nums[j]]>2) return false;
        }
        return split;
        
    }
};