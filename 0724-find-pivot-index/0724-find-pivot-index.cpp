class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int start = 0;
        int end = 0;

        for(int i = 0; i<nums.size(); i++){
            end += nums[i];
        }
        for(int i = 0; i<nums.size(); i++){
            end -= nums[i];

            if(start == end){
                return i;
            }
            start += nums[i];
        }
        return -1;
    }
};