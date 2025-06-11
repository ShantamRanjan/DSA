class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        // Method 1: Using extra space
        vector<bool> present(n + 1, false);
        
        // Mark all numbers that are present
        for(int num : nums) {
            present[num] = true;
        }
        
        // Find all missing numbers from 1 to n
        for(int i = 1; i <= n; i++) {
            if(!present[i]) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};

// Alternative O(1) space solution:
class SolutionOptimal {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        // Mark elements as visited by making them negative
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1; // Convert to 0-based index
            if(nums[index] > 0) {
                nums[index] = -nums[index]; // Mark as visited
            }
        }
        
        // Find indices with positive values (unvisited)
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                result.push_back(i + 1); // Convert back to 1-based
            }
        }
        
        // Restore original array (optional)
        for(int i = 0; i < n; i++) {
            nums[i] = abs(nums[i]);
        }
        
        return result;
    }
};