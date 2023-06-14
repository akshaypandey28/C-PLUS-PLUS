#include<bits/stdc++.h>// leetcode 437 path sum 3
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
int main(){
    Node* rootNode=new Node(10);
    rootNode->left=new Node(5);
    rootNode->left->left=new Node(3);
    rootNode->left->left->left=new Node(3);
    rootNode->left->left->right=new Node(-2);
    rootNode->right=new Node(-3);
    rootNode->left->right=new Node(2);
    rootNode->right->right=new Node(11);
    rootNode->right->right->right=new Node(12);
return 0;
}