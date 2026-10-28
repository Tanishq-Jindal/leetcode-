class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),  nums.end());
        int n = nums.size();
        int start = 0;
        int end = k-1;
        int mini = INT_MAX;

        while(end<n){
            mini = min(mini, nums[end] - nums[start]);
            start++;
            end++;
        }
        return mini;
    }
};