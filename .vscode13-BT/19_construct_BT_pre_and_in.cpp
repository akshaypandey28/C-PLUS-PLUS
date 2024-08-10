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
//preorder and inorder
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

//postprder and inorder
class Solution {
public:
    TreeNode* build(vector<int> &in,int instart,int inend,vector<int> &post,int poststart,int postend,unordered_map<int,int> &m){
        if(instart > inend || poststart > postend) return NULL;
        TreeNode* root=new TreeNode(post[poststart]);
        int root_idx=m[root->val];
        int rightSubTreeSize=inend-root_idx;
        root->right=build(in,root_idx+1,inend,post,poststart+1,poststart+rightSubTreeSize,m);
        root->left=build(in,instart,root_idx-1,post,poststart+rightSubTreeSize+1,postend,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        reverse(post.begin(),post.end());
        unordered_map<int,int> m;
        for(int i=0; i<in.size(); i++){
            m[in[i]]=i;
        }
        return build(in,0,in.size()-1,post,0,post.size()-1,m);
    }
};

//preorder and postorder
class Solution {
public:
    TreeNode* build(vector<int> &pre,int prestart,int preend,vector<int> &post,int poststart,int postend,unordered_map<int,int> &m){
        if(prestart > preend || poststart > postend) return NULL;
        TreeNode* root=new TreeNode(pre[prestart]);
        
        if(prestart==preend){
        return root;
        }

        int leftChildVal=pre[prestart+1];
        int leftchild_idx=m[leftChildVal];
        int leftSubTreeSize=leftchild_idx-poststart+1;


        root->left=build(pre,prestart+1,prestart+leftSubTreeSize,post,poststart,leftchild_idx,m);
        root->right=build(pre,prestart+leftSubTreeSize+1,preend,post,leftchild_idx+1,postend-1,m);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        unordered_map<int,int> m;
        for(int i=0; i<post.size(); i++){
            m[post[i]]=i;
        }
        //sort(post.begin(),post.end());
        return build(pre,0,pre.size()-1,post,0,post.size()-1,m);
    }
};
int main(){
    
return 0;
}