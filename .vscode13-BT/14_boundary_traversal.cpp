#include<bits/stdc++.h>
using namespace std;
int N=INT_MIN;
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
Node* construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1,j=2;
    while(q.empty()!=1 and i < n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=N) l=new Node(arr[i]);
        else l=NULL;
        if(arr[j]!=N and j!=n) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;

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
void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL and root->right==NULL) return ;
    cout<<root->value<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void bottomBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL and root->right==NULL) cout<<root->value<<" ";
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL and root->right==NULL) return ;
    rightBoundary(root->right);
    if(root->right==NULL) rightBoundary(root->left);
    cout<<root->value<<" ";
}
void boundary(Node* root){
    cout<<"Left Boundary ";
    leftBoundary(root);
    cout<<endl;
    cout<<endl;
    cout<<"Bottom Boundary ";
    bottomBoundary(root);
    cout<<endl;
    cout<<endl;
    cout<<"Right Boundary ";
    rightBoundary(root->right);
    cout<<endl;
    cout<<endl;
}
int main(){
    //construct
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    
    //int arr[]={17, N, 1, N, 9, N, 2, N, 11, N, 16, N, 8, N, 5, N, 3, N, 10, N, 13, N, 5, N, 13, N, 7, N, 10, N, 4, N, 7, N, 2, N, 12, N, 16};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    levelOrder(root);
    cout<<endl;
    boundary(root);
return 0;
}