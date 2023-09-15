#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    char data;
    vector<Node*> children ;
    Node(char data){
        this->data=data;
    }
};
void preorder(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    for(Node* child:root->children){
        preorder(child);
    }
    return ;
}
void inorder(Node* root){
    if(root==NULL){
        return ;
    }
    int childnodes=root->children.size();
    for(int i=0; i<childnodes-1; i++){
        inorder(root->children[i]);
    }

    cout<<root->data<<" ";
    if(childnodes>0){
        inorder(root->children[childnodes-1]);
    }
    return ;
}
int main(){ 
    Node* root=new Node('A');
    // int1024_t=5;
   

    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));
    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));
    root->children[2]->children.push_back(new Node('G'));
    preorder(root);
    cout<<endl;
    cout<<endl;
    inorder(root);
    // cout<<root->data<<endl;
    // for(Node* child:root->children){
    //     cout<<child->data<<" ";
    // }
    // cout<<endl;
return 0;
}