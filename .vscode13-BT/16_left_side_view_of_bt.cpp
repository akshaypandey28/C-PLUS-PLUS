#include<bits/stdc++.h>
using namespace std;
//GFG
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


//Function to return a list containing elements of left view of the binary tree.
int levels(Node* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left) , levels(root->right));
}
void preOrder(Node* root,vector<int> &ans,int level){ //i want root right and then left
        if(root==NULL) return ;
        ans[level]=root->data;
        preOrder(root->right,ans,level+1);
        preOrder(root->left,ans,level+1);
    }
vector<int> leftView(Node *root)
{
   // Your code here
    vector<int> ans(levels(root),0);
    preOrder(root,ans,0);
    return ans;
}
int main(){
return 0;
}