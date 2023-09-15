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
class BST{
    public :
    Node* root;
    BST(){
        root=NULL;
    }
};
void insertInBST(Node* &root,int val){
    Node* newNode=new Node(val);
    if(root==NULL){
        root=newNode;
        return ;
    }
    Node* current=root;
    while(true){ //jab tak true hai
        if(current->value > val){
            if(current->left==NULL){
                current->left=newNode;
                return ;
            }
            else{
                current=current->left;
            }
        }
        else{ //current->value < val
            if(current->right==NULL){
                current->right=newNode;
                return ;
            }
            else{
                current=current->right;
            }
        }
    }
}
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    BST bst1;
    insertInBST(bst1.root,3);
    insertInBST(bst1.root,1);
    insertInBST(bst1.root,4);
    insertInBST(bst1.root,6);
    insertInBST(bst1.root,2);
    cout<<"this is of insertInBST ";
    preorder(bst1.root);
    cout<<endl;
    cout<<"----------------"<<endl;
return 0;
}