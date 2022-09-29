class Solution
{
    public:
        vector<int> findClosestElements(vector<int> &arr, int k, int x)
        {
            if (k >= arr.size() || arr.size() == 1) return arr;
            vector<int> v(k);
            vector<pair<int, int>> tp(arr.size());
            for (int i = 0; i < arr.size(); i++){
                tp[i] = {abs(arr[i] - x), i};
            }
            sort(tp.begin(), tp.end());
            for (int i = 0; i < k; i++) v[i] = arr[tp[i].second];
            sort(v.begin(), v.end());
            return v;
        }
};