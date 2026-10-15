class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = 0;
        int ans = 0;

        while(end<n){
            if(nums[end]==1){
                end++;
            }
            else{
                ans = max(ans, end-start);
                end++;
                start = end;
            }
        }
        ans = max(ans, end-start);

        return ans;
    }
};