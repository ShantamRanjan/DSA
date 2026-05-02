class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
        if(i==0 || i==n-1) return false;
        int j = i;
        while(i+1<n && nums[i]>nums[i+1]){
            i++;
        }
        if(i==j || i==n-1) return false;
        j = i;
          while(i+1<n && nums[i]<nums[i+1]){
            i++;
        }
        if(i==j) return false;
        
        return i==n-1;

        
    }
};