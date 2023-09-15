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
Node* recursively_Insertion(Node* &root,int val){
    if(root==NULL){
        Node* newNode=new Node(val);
        return newNode;
    }
    //recursive case
    if(root->value > val){
        root->left=recursively_Insertion(root->left,val); //if root becomes null then newnode is returned 
    }
    else{
        root->right=recursively_Insertion(root->right,val);
    }
    return root;
}
bool searchBST(Node* root,int key){
    if(root==NULL){ // base case
        return false;
    }
    if(root->value==key){ //base case
        return true;
    }
    //recursive case 
    if(root->value < key){
       return searchBST(root->right,key);
    }
    if(root->value > key){
       return searchBST(root->left,key);
    }
}
Node* largest_Nodes_BST(Node* root){
    Node* curr=root;
    while(curr!=NULL && curr->right!=NULL){ //right because largest nodes is in the right side
        curr=curr->right;
    }
    return curr;
}
Node* deleteBST(Node* root,int key){
    if(root==NULL){
        return root;
    }
    if(root->value < key ){ //here only calling the recursively not the deletion perform 
        root->right=deleteBST(root->right,key);
    }
    else if(root->value > key){ //here only calling the recursively not the deletion perform 
        root->left=deleteBST(root->left,key);
    }
   else{//root is the node to be deleted as here the root->value gets==to key so the deletion is performed
        //and here there are 3 cases

        //case 1 -> is node has 0 child nodes
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        //case 2 -> is node has 1 child nodes
        else if (root->left==NULL){
            Node* temp =root->right;
            free(root);
            return temp; //temp is returned because of temp is get stored to their grandparents
        }
        else if (root->right==NULL){
            Node* temp =root->left;
            free(root);
            return temp; //temp is returned because of temp is get stored to their grandparents
        }
        //case 3 -> is node has 2 child nodes
        else{
            Node* just_smaller_nodes=largest_Nodes_BST(root->left);//just_smaller_nodes root->left side hogi aur
            //uske bad root->right move krna hai
            root->value=just_smaller_nodes->value;
            root->left=deleteBST(root->left,just_smaller_nodes->value);
        }
    }
    return root;
}
int main(){
    BST bst1;
    // insertInBST(bst1.root,3);
    // insertInBST(bst1.root,1);
    // insertInBST(bst1.root,4);
    // insertInBST(bst1.root,6);
    // insertInBST(bst1.root,2);
    // cout<<"this is of insertInBST ";inorder(bst1.root);
    // cout<<endl;
    // cout<<"----------------"<<endl;
    bst1.root=recursively_Insertion(bst1.root,3);//because this is function 
    //is returning node
    recursively_Insertion(bst1.root,1);
    recursively_Insertion(bst1.root,4);
    recursively_Insertion(bst1.root,6);
    recursively_Insertion(bst1.root,2);
    cout<<"this is of recursively_Insertion    ";
    inorder(bst1.root);
    cout<<endl;
    cout<<endl;
    cout<<searchBST(bst1.root,6)<<endl;
    cout<<endl;
    bst1.root=deleteBST(bst1.root,6);
    inorder(bst1.root);
    cout<<endl;
    cout<<endl;
return 0;
}