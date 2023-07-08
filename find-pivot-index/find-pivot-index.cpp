class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int it:nums){
            sum+=it;
        }
        int left_sum =0;
        for(int  i = 0;i<nums.size();i++){
            int right_sum = sum -  left_sum - nums[i];
            if(left_sum == right_sum) return i;
            else{
                left_sum += nums[i];
            }
        }
        return -1;
    }
};