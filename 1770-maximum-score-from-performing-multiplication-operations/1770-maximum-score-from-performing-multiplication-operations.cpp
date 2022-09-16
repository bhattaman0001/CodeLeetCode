class Solution {
public:
    vector<vector<int>> dp;
    int solve(int i, int n, int j, vector<int> &nums, vector<int> &M){
        if (j == M.size()) return 0;
        if (dp[i][j] != INT_MIN) return dp[i][j];
        int e = n - (j-i) - 1;
        int left = solve(i + 1, n, j + 1, nums, M) + (nums[i] * M[j]);        
        int right = solve(i, n, j + 1, nums, M) + (nums[e] * M[j]);
        return dp[i][j] = max(left, right);
    }    
    int maximumScore(vector<int>& nums, vector<int>& M) {   
        int n = nums.size(), m = M.size();
        dp.resize(m + 1, vector<int>(m + 1, INT_MIN));
        return solve(0, n, 0, nums, M);
    }
};