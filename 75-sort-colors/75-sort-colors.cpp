class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int z,o,t;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] > nums[j]){
                    int t = nums[i];
                    nums[i] = nums[j];
                    nums[j] = t;
                }
            }
        }
    }
};