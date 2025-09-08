class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0;        // number of jumps taken
        int currentEnd = 0;   // end of current jump range
        int farthest = 0;     // farthest we can reach in next jump

        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]); 

            if (i == currentEnd) { 
                jumps++;
                currentEnd = farthest;
            }
        }
        return jumps;
    }
};
