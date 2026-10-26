class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int start = 0;
        int end = 0;
        int sum = 0;
        int count = 0;

        while (end < n) {
            sum += arr[end];

            if (end - start + 1 == k) {
                if (sum >= k * threshold) {
                    count++;
                }

                sum -= arr[start];
                start++;
            }

            end++;
        }

        return count;
    }
};