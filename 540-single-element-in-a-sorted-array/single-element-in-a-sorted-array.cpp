class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int _xor = 0;
      for(int i = 0;i<nums.size();i++){
          _xor^=nums[i];
      }
      return _xor;
    }
};