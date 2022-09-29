class Solution
{
    public:
        void merge(vector<int> &A, int m, vector<int> &B, int n)
        {
            int a = m - 1, b = n - 1, c = m + n - 1;
            while(a >= 0 and b >= 0){
                if(A[a] > B[b]) A[c--] = A[a--];
                else A[c--] = B[b--];
            }
            
            while(b>=0) A[c--] = B[b--];
        }
};