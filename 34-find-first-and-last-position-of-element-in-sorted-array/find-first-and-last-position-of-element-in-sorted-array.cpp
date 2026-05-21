class Solution {
public:
    int findlast(vector<int>& nums, int target) {
        int n = nums.size();
        int last = -1;
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                last = mid;
                high = mid - 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return last;
    }
    int findfirst(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1;
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                first = mid;
                low = mid + 1;
            } else if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return first;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {findlast(nums, target) ,findfirst(nums, target)};
    }
};