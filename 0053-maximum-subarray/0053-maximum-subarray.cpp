class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int current_sum = 0;
        int total_sum = INT_MIN;
        for(int i = 0;i<n;i++){
            current_sum+=nums[i];
            total_sum = max(total_sum,current_sum);
            if(current_sum<0) current_sum = 0;

        }
       
        return total_sum;
    }
};