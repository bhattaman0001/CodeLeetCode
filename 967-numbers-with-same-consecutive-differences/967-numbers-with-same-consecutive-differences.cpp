class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        vector<int> cur = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for (int i = 2; i <= N; ++i) {
            vector<int> cur2;
            for (int x : cur) {
                int y = x % 10;
                if (y + K < 10)     // imp
                    // cout<<x * 10 + y + K<<'\n';
                    cur2.push_back(x * 10 + y + K);
                if (K > 0 && y - K >= 0)  // imp
                    // cout<<x * 10 + y - K<<'\n';
                    cur2.push_back(x * 10 + y - K);
            }
            cur = cur2;
        }
        return cur;
    }
};