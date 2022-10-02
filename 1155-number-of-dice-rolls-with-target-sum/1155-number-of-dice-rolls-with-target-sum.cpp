class Solution {
public:
    int mod = 1000000007;
    int solve(int dice, int faces, int target){
        if(target < 0) return 0;
        if(dice == 0 and target != 0) return 0;
        if(dice != 0 and target == 0) return 0;
        if(dice == 0 and target == 0) return 1;
        
        int ans=0;
        for(int i=1;i<=faces;i++){
            ans += solve(dice-1,faces,target-i);
        }
        return ans;
    }
    long long int solveMem(int dice, int faces, int target, vector<vector<long long int>> &dp){
        if(target < 0) return 0;
        if(dice == 0 and target != 0) return 0;
        if(dice != 0 and target == 0) return 0;
        if(dice == 0 and target == 0) return 1;
        
        if(dp[dice][target] != -1) return dp[dice][target];
        
        long long int ans = 0;
        for(int i=1;i<=faces;i++){
            ans = ans % mod + solveMem(dice-1, faces, target-i, dp) % mod;
        }
        return dp[dice][target] = ans % mod;
    }
    
    long long solveTab(int d, int f, int t){
        vector<vector<long long>> dp(d+1, vector<long long>(t+1, 0));
        dp[0][0] = 1;
        for(int dice = 1; dice <= d; dice++){
            for(int target = 1; target <= t; target++){
                long long ans = 0;
                for(int faces = 1; faces <= f; faces++){
                    if(target - faces >= 0)
                        ans = ans%mod + dp[dice-1][target - faces] % mod;                    
                }
                dp[dice][target] = ans % mod;
            }
        }
        return dp[d][t] % mod;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long>> dp(n + 1, vector<long long>(target + 1, -1));
        return solveMem(n, k, target, dp); 
        
        // return solveTab(n, k, target);
    }
};