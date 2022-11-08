class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int totalWeightOnLeft = 0;
        int totalWeightOnRight = std::accumulate( nums.begin(), nums.end(), 0);
        
        
        for(std::size_t i = 0; i < nums.size() ; i++ ){
            
            int currentWeight = nums[i];
            
            totalWeightOnRight -= currentWeight;
            
            if( totalWeightOnLeft == totalWeightOnRight ){
                // balance is met on both sides
                return i;
            }
            
            totalWeightOnLeft += currentWeight;
        }
        
        
        return -1;
    }
    
};