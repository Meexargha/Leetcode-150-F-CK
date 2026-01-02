class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>seen;
        for(int i=0; i<nums.size(); i++){
            int x=nums[i];

            if(seen.count(x)){
                return x;
            }
            seen.insert(x);
        }
        return -1;
    }
};
