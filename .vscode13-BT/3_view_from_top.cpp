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
void viewFromTop(Node* root,vector<int> &a){
    if(root==NULL){
        return ;
    }
    queue<Node*> q;
    q.push(root);
    while(q.empty()!=1){
        int nodesAtCurrentLevel=q.size();
        while(nodesAtCurrentLevel>0){
            Node* currNode=q.front();
            q.pop();
            if(nodesAtCurrentLevel==1){
                a.push_back(currNode->value);
            }
            if(currNode->left!=NULL){
                q.push(currNode->left);
            }
            if(currNode->right!=NULL){
                q.push(currNode->right);
            }
            nodesAtCurrentLevel--;
        }
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
    vector<int> a;
    viewFromTop(rootNode,a);
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}