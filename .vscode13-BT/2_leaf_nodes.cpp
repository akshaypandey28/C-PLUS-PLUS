#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int value;
    Node* left;
    Node* right;
    Node(int val){
        value=val;
        left=NULL;
        right=NULL;
    }
};
int leafNodes(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;// that is rootnode is leafnode
    }
    int left=leafNodes(root->left);
    int right=leafNodes(root->right);
    return (left+right);
}
int main(){
    Node* rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    rootNode->right->right->right=new Node(12);
    cout<<"the no. of leaf nodes in binary tree is "<<leafNodes(rootNode)<<endl;
return 0;
}