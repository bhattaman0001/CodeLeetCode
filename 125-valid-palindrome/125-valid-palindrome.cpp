class Solution
{
    public:
        bool isPalindrome(string s)
        {
            if (s.size() == 0) return 1;
           	        string temp;
           	        for(int i=0;i < s.size();i++){
           	            if((s[i] >= '0' and s[i] <= '9') || (s[i] >= 'a' and s[i] <= 'z')){
           	                temp.push_back(s[i]);
           	            }
           	            else if(s[i] >= 'A' and s[i] <= 'Z'){
           	                temp.push_back(tolower(s[i]));
           	            }
           	        }
            
            int i=0,j=temp.size()-1;
            while(i < j){
                if(temp[i] != temp[j]) return 0;
                i++;j--;                
            }
            return 1;
            

            // for (int i = 0; i < s.size(); i++)
            // {
            //     if ((s[i] >= '0'
            //             and s[i] <= '9') || (s[i] >= 'a'
            //             and s[i] <= 'z'))
            //     {
            //         continue;
            //     }
            //     else if (s[i] >= 'A'
            //         and s[i] <= 'Z')
            //     {
            //         s[i] = tolower(s[i]);
            //     }
            //     else
            //     {
            //         s[i] = '#';
            //     }
            // }
            // cout<<s<<"\n";
            // int i = 0, j = s.size() - 1;
            // while (i < j)
            // {
            //     if (s[i] == '#') i++;
            //     if (s[j] == '#') j--;
            //     else if (s[i] != s[j]) return 0;
            //     else
            //     {
            //         i++;
            //         j--;
            //     }
            // }
            // return 1;
        }
};