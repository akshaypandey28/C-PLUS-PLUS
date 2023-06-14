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
void levelOrder(Node* rootNode){ //level_order_traversal_bottom_to_top
    if(rootNode==NULL){
        return ;
    }
    queue<Node*> q;
    stack<int> st;
    q.push(rootNode);
    while(q.empty()!=1){
        int size=q.size(); //this tells about no. of nodes at current level
        while(size--){
            Node* currNode=q.front();
            q.pop();
            st.push(currNode->value);
           // cout<<currNode->value<<" ";
            if(currNode->right!=NULL){ //in this firsty insert right tree 
                q.push(currNode->right); //then left tree
            }
            if(currNode->left!=NULL){
                q.push(currNode->left);
            }
        }
    }
    while(st.empty()!=1){
            cout<<st.top()<<" ";
            st.pop();
    }
    cout<<endl;
}
int main(){
    Node* rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    rootNode->right->right->right=new Node(12);
    levelOrder(rootNode);
return 0;
}