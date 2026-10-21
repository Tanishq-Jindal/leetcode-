class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        for (int end = k; end < n; end++) {
            sum += nums[end] - nums[end - k];
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};