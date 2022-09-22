class Solution
{
    public:
        string reverseWords(string s) 
        {
            stringstream str(s);
            string t;
            string ans="";
            while(getline(str, t, ' ')){
                reverse(t.begin(), t.end());
                ans += t;
                ans += ' ';
            }
            return ans.substr(0, ans.size()-1);
        }
};