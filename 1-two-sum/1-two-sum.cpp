class Solution
{
    public:
        int find(vector<int> &v, int k, int s)
        {
            for (int i = s; i < v.size(); i++)
            {
                if (v[i] == k) return i;
            }
            return -1;
        }
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v(2, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            int idx = find(nums, target - nums[i], i + 1);
            v[0] = i;
            if (idx != -1)
            {
                v[1] = idx;
                break;
            }
        }
        return v;
    }
};