class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int zeroes = 0;
        int longest = 0;

        while (true) {
            if (zeroes <= 0) {
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

            longest = max(longest, end - start - zeroes);
        }

        return longest;
    }
};