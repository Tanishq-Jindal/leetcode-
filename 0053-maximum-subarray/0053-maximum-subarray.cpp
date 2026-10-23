class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int sum = 0;
        int maxi = nums[0];

        while (end < n) {
            sum += nums[end];

            maxi = max(maxi, sum);

            if (sum < 0) {
                sum = 0;
                start = end + 1;
            }
            end++;
        }
        return maxi;
    }
};