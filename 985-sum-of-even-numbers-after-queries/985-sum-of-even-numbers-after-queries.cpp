class Solution {
public:    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v;
        int n = queries.size();
        int evenSum = 0;
        for(int i=0;i<nums.size();i++) if(nums[i]%2==0) evenSum += nums[i];        
        for(auto &q : queries){
            if(nums[q[1]] % 2 == 0) evenSum -= nums[q[1]];
            nums[q[1]] += q[0];
            if(nums[q[1]] % 2 == 0) evenSum += nums[q[1]];
            v.push_back(evenSum);
        }
        return v;
    }
};