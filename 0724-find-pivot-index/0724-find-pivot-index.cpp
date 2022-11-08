class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int total_sum = 0;
        int left_sum = 0;
        int n = nums.size();
        for(int i =0; i< n;i++){
            total_sum = total_sum + nums[i];
        }
        
        for(int i = 0; i< n ; i++){
            int current = nums[i];
            total_sum -= current;
            if(left_sum == total_sum){
                return i;
            }
            left_sum += current;
        }
        return -1;
        
    }
};