class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m, j=0; i<m+n, j<n; i++, j++){
            nums1[i] = nums2[j];
        }
        // sort(nums1.begin(), nums1.end());
        for(int i=0;i<n+m;i++){
            for(int j=i+1;j<n+m;j++){
                if(nums1[i] > nums1[j]){
                    int t = nums1[i];
                    nums1[i] = nums1[j];
                    nums1[j] = t;
                }
            }
        }
    }
};