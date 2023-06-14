#include<bits/stdc++.h>// here i have to find max. no. of nodes in Binary tree not no. of edges
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
int maxDepth(Node* root){
    if(root==NULL){
        return 0;
    }
    //recursive case
    int leftDepth=maxDepth(root->left);
    int rightDepth=maxDepth(root->right);

    return max(leftDepth,rightDepth)+1;
}
int main(){
    Node* rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    rootNode->right->right->right=new Node(12);
    cout<<"max depth is "<<maxDepth(rootNode)<<endl;
return 0;
}