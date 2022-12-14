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
#include<bits/stdc++.h>
class Solution {
public:
    // vector<int> v;
    // void inorder(TreeNode* root){
    //     if(!root) return;
    //     inorder(root->left);
    //     v.push_back(root->val);
    //     inorder(root->right);
    // }
    // bool findTarget(TreeNode* root, int k) {
    //     if(!root) return false;
    //     if(root and !root->left and !root->right) return false;
    //     inorder(root);
    //     int i = 0, j = v.size() - 1;
    //     while(i < j){
    //         int t = v[i] + v[j];
    //         if(t == k) return true;
    //         if(t > k) j--;
    //         else i++;
    //     }
    //     return false;
    // }
    
    unordered_set<int> s;    
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        if(s.count(k - root->val)) return 1;
        s.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
    
    
    
};