class Solution {
public:
    int helper(vector<int> &v, int k, int j){
        if(v.size()==1) return v[0];
        j = (k+j)%v.size();
        v.erase(v.begin()+j);
        return helper(v,k,j);
    }
    int findTheWinner(int n, int k) {
        vector<int> v;
        for(int i=0;i<n;i++) v.push_back(i+1);
        return helper(v, k-1, 0);
    }
};