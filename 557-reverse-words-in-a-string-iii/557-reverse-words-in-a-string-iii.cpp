class Solution
{
    public:
        string reverseWords(string s) 
        {
            // stringstream str(s);
            // string t;   
            // s.clear();
            // while(getline(str, t, ' ')){
            //     reverse(t.begin(), t.end());
            //     s += t;
            //     s += ' ';
            // }
            // return s.substr(0, s.size()-1);
            
            int i=0;
            for(int j=0;j<s.size();j++){
                if(s[j] == ' '){
                    reverse(s.begin()+i, s.begin()+j);
                    i=j+1;
                }
            }
            reverse(s.begin()+i, s.end());
            return s;
        }
};