class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int current_sum = 0;
        for(int i = 0; i<n;i++){
            current_sum = current_sum + nums[i];
            ans.push_back(current_sum);
        }
        return ans;
    }
};