class Solution {
public:    
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v;
        int n = queries.size();
        int evenSum = 0;
        for(int i=0;i<nums.size();i++) if(nums[i]%2==0) evenSum += nums[i];        
        for(int i=0;i<n;i++){
            if(nums[queries[i][1]] % 2 == 0){
                if(queries[i][0] % 2 == 0){
                    nums[queries[i][1]] += queries[i][0];
                    evenSum += queries[i][0];
                    v.push_back(evenSum);
                }else{
                    evenSum -= nums[queries[i][1]];
                    nums[queries[i][1]] += queries[i][0];
                    v.push_back(evenSum);
                }
            }else{
                 if(queries[i][0] % 2 != 0){
                    nums[queries[i][1]] += queries[i][0];
                    evenSum += nums[queries[i][1]];
                    v.push_back(evenSum);
                }else{      
                    nums[queries[i][1]] += queries[i][0];
                    v.push_back(evenSum);
                }  
            }            
        }
        return v;
    }
};