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
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->value<<" ";
    inorder(root->right);
}
Node* LCA(Node* root,Node* n1,Node* n2){
    if(root==NULL){
        return NULL;  }
    if(root->value > n1->value && root->value > n2->value){
        //lca in lie in left subtree
        return LCA(root->left,n1,n2);  }
    if(root->value < n1->value && root->value < n2->value){
        //lca in lie in right subtree
        return LCA(root->right,n1,n2); }
    //if root value lies between n1 and n2
    //or root value is equal to any of node values
    return root;   }
int main(){
    BST bst1;
    insertInBST(bst1.root,3);
    insertInBST(bst1.root,1);
    insertInBST(bst1.root,4);
    insertInBST(bst1.root,6);
    insertInBST(bst1.root,2);
    cout<<"this is of insertInBST ";
    inorder(bst1.root);
    cout<<endl;
    cout<<"----------------"<<endl;
    Node* n1=new Node(1);
    Node* n2=new Node(2);
    Node* result=LCA(bst1.root,n1,n2);
    cout<<"the value of lowest common ancestor is "<<result->value<<endl;
return 0;   }