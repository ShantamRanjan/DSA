class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged(m+n);
        int left = 0;
        int right = 0;
        int index = 0;
        while(left < m && right < n){
            if(nums1[left]<=nums2[right]){
                merged[index++] = nums1[left++];
            }
            else merged[index ++] = nums2[right++];
        }
        while(left<m){
            merged[index++] = nums1[left++];
        }
        while(right<n){
            merged[index++] = nums2[right++];
        }
        for(int i = 0 ; i<m+n ; i++){
            nums1[i] = merged[i];
        }
        
    }
};