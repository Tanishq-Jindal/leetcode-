class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int>myset;
        for (auto x: jewels){
            myset.insert(x);
        }
        int count = 0;
        for (auto value:stones){
            if(myset.find(value)!=myset.end()){
            count++;
            }
        }
        return count;
    }
};