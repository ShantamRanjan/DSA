#include <bits/stdc++.h>
class Solution {
public:
    int subarraySum(vector<int>& nums, long long k) {
       unordered_map<long long, int> freq;
        long long sum = 0;
        int count = 0;

        // Base case: a prefix sum of 0 occurs once before starting
        freq[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            long long rem = sum - k;

            if (freq.find(rem) != freq.end()) {
                count += freq[rem];  // add all subarrays ending at i with sum=k
            }

            freq[sum]++; // store/update prefix sum frequency
        }

        return count;
    }
};