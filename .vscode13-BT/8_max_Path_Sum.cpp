#include<bits/stdc++.h> //leetcode 124 (hard) binary tree maximum path sum
using namespace std;
/* https://leetcode.com/problems/binary-tree-maximum-path-sum/ */
struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
//same function as of height of binary tree
    int sum(TreeNode* root,int &ans){
        if(root==NULL) return 0;
        int leftsum=max(0,sum(root->left,ans));
        int rightsum=max(0,sum(root->right,ans));
        ans=max(ans,root->val + leftsum + rightsum );
        return root->val + max(leftsum,rightsum);
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL) return 0;
        int ans=INT_MIN;
        sum(root,ans);
        return ans;
    }
};
int main(){
return 0;
}