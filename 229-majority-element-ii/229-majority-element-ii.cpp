class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;            
        }
        for(auto x : mp){
            if(x.second > n/3) v.push_back(x.first);
        }
        return v;
    }
};