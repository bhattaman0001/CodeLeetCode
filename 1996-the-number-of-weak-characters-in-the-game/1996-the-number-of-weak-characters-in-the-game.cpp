class Solution {
public:
    bool static compare(vector<int>&a, vector<int>&b){
        if(a[0]==b[0])return a[1] > b[1];
        return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), compare);
        int n = properties.size(), ans = 0, tm = INT_MIN;        
        for(int i=n-1;i>=0;i--){
            if(properties[i][1] < tm)
                ans++;
            tm = max(tm, properties[i][1]);
        }
        return ans;
    }
};