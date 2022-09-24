/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> v;    
    void dfs(TreeNode* root, int targetSum, vector<int> &t){
        if(!root) return;
        t.push_back(root->val);
        targetSum -= root->val;
        if((!root->left and !root->right) && targetSum == 0){
            v.push_back(t);            
        }else{
            dfs(root->left, targetSum, t);
            dfs(root->right, targetSum, t);
        }
        t.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {        
        if(!root) return {};   
        vector<int> t;
        dfs(root, targetSum, t);
        return v;
    }
};