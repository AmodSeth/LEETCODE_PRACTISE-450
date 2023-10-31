class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int result=0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<buy)
            {
                buy=prices[i];
            }
           int t= prices[i]-buy;
            result=max(result,t);
            
        }
        return result;
    }
};