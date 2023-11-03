#include<bits/stdc++.h>
using namespace std;
//leetcode 199
//Definition for a binary tree node.
struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//1st Solution
class Solution { 
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left) , levels(root->right));
    }
    void preLevelOrder(TreeNode* root,int currLevel,int reqLevel,vector<int> &ans){
        if(root==NULL) return ;
        if(currLevel==reqLevel) ans[currLevel]=root->val;
        preLevelOrder(root->left,currLevel+1,reqLevel,ans);
        preLevelOrder(root->right,currLevel+1,reqLevel,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        int n=ans.size();
        for(int i=0; i<n; i++){
            preLevelOrder(root,0,i,ans);
        }
        return ans;
    }
};
//2nd Solution
class Solution {
public:
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left) , levels(root->right));
    }
    void preOrder(TreeNode* root,vector<int> &ans,int level){ //i want root left and then right
        if(root==NULL) return ;
        ans[level]=root->val;
        preOrder(root->left,ans,level+1);
        preOrder(root->right,ans,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        preOrder(root,ans,0);
        return ans;
    }
};
int main(){
return 0;
}