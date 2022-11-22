class Solution {
public:
    //dp question same as min coins 0/1knapsack based
//     int helper(int i,int target,vector<int> &perfectquares,vector<vector<int>> &dp)
//     {
//         //base condition 
//         if(i==perfectquares.size()){
//             if(target == 0) return 0;
//             else return 1e9;
        
//         }
//         if(target <= 0) return 0;
        
//         if(dp[i][target]!=-1) return dp[i][target];
        
//         //take or not take
//         //take
//         int take = INT_MAX;
//         if(perfectquares[i]<=target){
//             take = 1 + helper(i,target-perfectquares[i],perfectquares,dp);
//         }
//         //not take
//         int nottake = helper(i+1,target,perfectquares,dp);
        
        
//         return dp[i][target] = min(take,nottake);
    
//     }
//     int numSquares(int n) {
//         //makingaaray of perfect squres
//         vector<int> perfectquares;
//         for(int i = 0;i <= sqrt(n);i++){
//             perfectquares.push_back(pow(i,2));            
//         }
//         vector<vector<int>> dp(perfectquares.size(),vector<int>(n-1,-1));
//         return helper(0,n,perfectquares,dp);
//     }
     int solve(int n, vector<int> &dp) {
        if (n == 0) return 0;
        if (dp[n] != -1) return dp[n];
        dp[n] = INT_MAX;
        for(int i=1; i*i<=n; i++) {
            dp[n] = min(dp[n], solve(n-(i*i), dp)+1);
        }
        return dp[n];
    }
    int numSquares(int n) {
        vector <int> dp(n+1, -1);
        int ans = solve(n, dp);
        return ans;
    }
};