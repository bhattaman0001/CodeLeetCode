class Solution {
public:
    int fourSumCount(vector<int>& v1, vector<int>& v2, vector<int>& v3, vector<int>& v4)
    {
        int count=0;
        unordered_map<int, int> mp;
        // store the frequency of first 2 elements 
        for(auto &x : v1)
            for(auto &y : v2)
                mp[x+y]++;
            
        // check if negative of other 2 present in the map
        // if yes then add their frequency
        for(auto &x : v3)
            for(auto &y : v4)
                if(mp.count(0-x-y)) count += mp[0-x-y];
        
        return count;
    }
};