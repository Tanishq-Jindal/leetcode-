class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int zeroes = 0;
        int longest = 0;

        while (true) {
            if (zeroes <= 1) {
                if (end < n) {
                    if (nums[end] == 0) {
                        zeroes += 1;
                    }
                    end++;
                } else {
                    break;
                }
            } else {
                if (start < n) {
                    if (nums[start] == 0) {
                        zeroes -= 1;
                    }
                    start++;
                } else {
                    break;
                }
            }

            if (zeroes <= 1) {
                longest = max(longest, end - start);
            }
        }

        return longest - 1;
    }
};