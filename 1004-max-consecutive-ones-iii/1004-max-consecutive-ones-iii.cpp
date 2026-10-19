class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int zeroes = 0;
        int longest = 0;

        while (end < n) {
            if (nums[end] == 0) {
                zeroes++;
            }

            if (zeroes > k) {
                if (nums[start] == 0) {
                    zeroes--;
                }
                start++;
            }

            if (zeroes <= k) {
                longest = max(longest, end - start + 1);
            }

            end++;
        }

        return longest;
    }
};