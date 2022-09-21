class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        if(nums.empty()) return v;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            long long int e1 = target - nums[i];
            for(int j=i+1;j<n;j++){
                long long int e2 = e1 - nums[j];                
                int s = j+1;
                int e = n-1;
                while(s < e){
                    long long int newtarget = nums[s] + nums[e];
                    if(newtarget > e2) --e;
                    else if(newtarget < e2) ++s;
                    else{
                        vector<int> t(4, 0);
                        t[0] = nums[i];
                        t[1] = nums[j];
                        t[2] = nums[s];
                        t[3] = nums[e];
                        v.push_back(t);
                        
                        // check duplicates for number 4
                        while(s < e and nums[e] == t[3]) --e;
                        
                        // check duplicates for number 3
                        while(s < e and nums[s] == t[2]) ++s;
                    }
                }
                // check duplicates for number 2
                while(j+1 < n and nums[j+1] == nums[j]) ++j;
            }
            // check duplicates for number 1
                while(i+1 < n and nums[i+1] == nums[i]) ++i;
        }
        return v;
    }
};