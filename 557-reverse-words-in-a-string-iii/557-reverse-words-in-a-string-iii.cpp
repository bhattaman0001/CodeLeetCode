class Solution
{
    public:
        string reverseWords(string s) 
        {
            stringstream str(s);
            string t;   
            s.clear();
            while(getline(str, t, ' ')){
                reverse(t.begin(), t.end());
                s += t;
                s += ' ';
            }
            return s.substr(0, s.size()-1);
        }
};