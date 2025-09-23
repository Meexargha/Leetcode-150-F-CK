class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int crt_sum =0;
        for(int i =0; i< nums.size(); i++){
            
            crt_sum = nums[i]+crt_sum;
            if(max_sum< crt_sum){
            max_sum= crt_sum;
            }
            if(crt_sum<0){

            crt_sum =0;
            }


        }
        return max_sum;
    }
};
