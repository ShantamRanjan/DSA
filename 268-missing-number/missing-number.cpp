class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2; // Sum of 0 to n
        int actualSum = 0;
        
        for(int num : nums) {
            actualSum += num;
        }
        
        return expectedSum - actualSum;
    }
};

// Alternative O(1) space solution:
