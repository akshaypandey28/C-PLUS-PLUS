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
void preOrder(Node* rootNode){
    if(rootNode==NULL){  //base case
        return ;
    }
    cout<<rootNode->value<<" ";
    //recursive call
    preOrder(rootNode->left);
    preOrder(rootNode->right);
}
void inOrder(Node* rootNode){
    if(rootNode==NULL){  //base case
        return ;
    }
    //recursive call
    inOrder(rootNode->left);
    cout<<rootNode->value<<" ";
    inOrder(rootNode->right);
}
void postOrder(Node* rootNode){
    if(rootNode==NULL){  //base case
        return ;
    }
    //recursive call
    postOrder(rootNode->left);
    postOrder(rootNode->right);
    cout<<rootNode->value<<" ";
}
void levelOrder(Node* rootNode){
    if(rootNode==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(rootNode);

    while(q.empty()!=1){
        int size=q.size(); //this tells about no. of nodes at current level
        while(size--){
            Node* currNode=q.front();
            q.pop();
            cout<<currNode->value<<" ";
            if(currNode->left!=NULL){
                q.push(currNode->left);
            }
            if(currNode->right!=NULL){
                q.push(currNode->right);
            }
        }
        cout<<endl;
    }
}
int main(){
    Node* rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    rootNode->right->right->right=new Node(12);
    // cout<<"root node :"<<root->value<<"- root left :"<<
    // root->left->value<<"- root right :"<<root->right->value<<endl;
    cout<<"PreOrder ";
    preOrder(rootNode);
    cout<<endl;
    cout<<"InOrder ";
    inOrder(rootNode);
    cout<<endl;
    cout<<"PostOrder ";
    postOrder(rootNode);
    cout<<endl;
    cout<<"LevelOrder"<<endl;
    levelOrder(rootNode);
    cout<<endl;
return 0;
}