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
//case 1: left and right sum dono positive ho to root ke sath add ho jayega
//case 2: left ya right me se koi ek negative ho jaye to sirf positive wle ke sath root add hoga
//case 3: dono negative ho jaye to sirf root answer hoga
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