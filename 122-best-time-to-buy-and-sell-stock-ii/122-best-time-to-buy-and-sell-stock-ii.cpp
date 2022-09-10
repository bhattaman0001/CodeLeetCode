class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = prices[0];
        int ans = 0;
        int n = prices.size();        
        for(int i=1;i<n;i++){
            if(prices[i] <= prices[i-1]){
                mi = prices[i];                
            }else{
                ans += prices[i] - mi;
                mi = prices[i];
            }
        }
        if(ans < 0) return 0;
        else return ans;
    }
};