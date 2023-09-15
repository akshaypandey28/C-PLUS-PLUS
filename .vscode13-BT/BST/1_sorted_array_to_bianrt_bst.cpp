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
void preorder(Node* root){ //Q1-> sorted_array_to_binary_bst
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node* sorted_array_to_BST(vector<int> v,int start,int end){ 
    if(start>end){  //base case
        return NULL; //make middle element on every creation of the array
    } //creation means like binary search dividing of the array into smaller sizes
    int mid=start +(end-start)/2; //this gives middle element
    Node* root=new Node(v[mid]);
    //recursive case
    root->left=sorted_array_to_BST(v,start,mid-1);
    root->right=sorted_array_to_BST(v,mid+1,end);
    return root;
}
int main(){
    BST bst1;
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];  }
    bst1.root=sorted_array_to_BST(v,0,n-1);
    preorder(bst1.root);  return 0;    }