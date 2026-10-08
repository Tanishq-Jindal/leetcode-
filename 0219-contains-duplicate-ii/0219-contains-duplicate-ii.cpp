class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> ld;
        for(int i = 0; i<nums.size(); i++){
            if(ld.find(nums[i]) != ld.end()){
                if(i - ld[nums[i]] <= k){
                    return true;
                }
            }
            ld[nums[i]] = i;        
        }
        return false;
    }
};