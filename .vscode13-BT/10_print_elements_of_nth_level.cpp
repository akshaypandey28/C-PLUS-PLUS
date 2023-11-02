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
//nth level can be printed by the same code of preorder inorder and postorder
void nthlevel(Node* root,int currLevel,int reqlevel){ //from left to right
    if(root==NULL) return ;
    if(currLevel==reqlevel) {
        cout<<root->value<<" ";
        return ;
    }
    nthlevel(root->left,currLevel+1,reqlevel);
    nthlevel(root->right,currLevel+1,reqlevel);
}

int main(){
    Node* rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    nthlevel(rootNode,1,3);
return 0;
}