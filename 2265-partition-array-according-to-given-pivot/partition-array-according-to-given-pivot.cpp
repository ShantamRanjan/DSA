class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp1;
        vector<int> temp2;
        vector<int> ans;
        int cntpivot = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                temp1.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                temp2.push_back(nums[i]);
            }
            else cntpivot++;

        }
        for(int x: temp1) ans.push_back(x);
        for(int i=0;i<cntpivot;i++){
            ans.push_back(pivot);

        }
        for(int x:temp2) ans.push_back(x);

        return ans;
    }
};