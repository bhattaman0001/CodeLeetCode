class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // it will make the solution more optimised O(log(N))
        int diff = INT_MAX;
        int ans = target;
        
        // O(N*log(N))
        for(int i=0;i<nums.size();i++){
            int el = nums[i];
            int start = i+1;
            int end = nums.size() - 1;
            while(start < end){
                if(el + nums[start] + nums[end] == target) return target;
                else if(abs(el + nums[start] + nums[end] - target) < diff){
                    diff = abs(el + nums[start] + nums[end] - target);
                    ans = el + nums[start] + nums[end];
                }
                
                if(el + nums[start] + nums[end] > target) end--;
                else start++;
            }
        }
        return ans;
        
        // overall O(N^2)
    }
};