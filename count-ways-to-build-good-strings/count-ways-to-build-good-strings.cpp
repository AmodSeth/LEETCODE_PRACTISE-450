
      /* trivial dynamic problem */
        /* 1. Each place can have 2 options either 0 or 1 
            2. for l = 6 in how many ways to get 6 either 3 ones
            or woulvd appended length = 4
            3. base case would be how many strings had to be to 0
            4. length matters  for l = 5 i know how many total string would be there 
            5. if i know particular length then l-z 
        */
    //     long long mod = 1e7;
    //     int dp[10000000];
    //     dp[0] =1;
    //     for(int i = 1;i<= 10000;i++){
    //         if(i-zero >= 0){
    //             dp+=dp[i-zero];
    //         } 
    //         if(i-one >= 0){
    //             dp[i]+=dp[i-one];
    //         }
    //         dp[i]%=mod;
    //     }
    //     long long ans = 0;
    //     for(int i = low;i<=high;i++){
    //         ans+=dp[i];
    //     }
    //     return (int)(ans%mod);
    // }
    class Solution {
    int mod = 1000000007;
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        std::vector<int> dp(high + std::max(zero, one), 0);

        dp[high]  = 1;

        for(int i = high-1; i >= 0; --i) {
            int takeOne = dp[i + one];
            int takeZero = dp[i + zero];
            dp[i] = ((takeOne + takeZero) + (i >= low)) % mod;
        }

        return dp[0];
    }

};