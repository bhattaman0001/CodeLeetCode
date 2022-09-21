class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans="";
        int count=0;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i] == '-') continue;
            if(s[i] >= 'a' and s[i] <= 'z'){
                s[i] = toupper(s[i]);
            }
            ans.push_back(s[i]);
            count++;
            if(count==k){
                count=0;
                if(i>0){
                    ans.push_back('-');
                }
            }
        }
        if(ans.size()==0) return "";
        if(ans[ans.size()-1]=='-')ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};