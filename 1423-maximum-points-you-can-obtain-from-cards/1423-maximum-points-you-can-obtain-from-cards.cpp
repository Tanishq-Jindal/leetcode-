
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int start = 0, end = k - 1;
        int sum = 0;

        for (int i = start; i <= end; i++) {
            sum += cardPoints[i];
        }

        int ans = sum;

        while (end >= 0) {
            sum -= cardPoints[end];
            end--;

            start = n - 1 - (k - 1 - end - 1);
            sum += cardPoints[start];

            ans = max(ans, sum);
        }

        return ans;
    }
};