#include<bits/stdc++.h>
using namespace std;
//leetcode 105
//Definition for a binary tree node.
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
    TreeNode* build(vector<int>& preorder,int prestart ,int preend,vector<int>& inorder,int instart,int inend,unordered_map<int,int> &m){
        if(prestart>preend || instart>inend){
            return NULL; //handling the leaf nodes 
        }
        TreeNode* rootNode=new TreeNode(preorder[prestart]);
        int rootInOrderIndex=m[rootNode->val];
        int leftSubTreeSize=rootInOrderIndex-instart;
        rootNode->left=build(preorder,prestart+1,prestart+leftSubTreeSize,inorder,instart,rootInOrderIndex-1,m);

        rootNode->right=build(preorder,prestart+leftSubTreeSize+1,preend,inorder,rootInOrderIndex+1,inend,m);
    return rootNode;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> m;
        for(int i=0; i<inorder.size(); i++){
            m[inorder[i]]=i; //storing indexes for inorder so that searching can be done easily
        }

        return build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
    }
};
int main(){
    
return 0;
}