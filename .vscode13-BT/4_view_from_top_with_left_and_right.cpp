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
vector<int> top_View_BT(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<pair<Node*,int>> q; //pair queue
    q.push(make_pair(root,0));
    map<int,int> m;//here i will store the value of every column
    while(q.empty()!=1){
        int nodesAtCurrnetLevel=q.size();
        while(nodesAtCurrnetLevel--){
            pair<Node*,int> p=q.front();
            Node* currNode=p.first;
            int currCol=p.second;
            q.pop();
            if(m.find(currCol)==m.end()){
                m[currCol]=currNode->value;
            }
            if(currNode->left!=NULL){
                q.push(make_pair(currNode->left,currCol-1));
            }
            if(currNode->right!=NULL){
                q.push(make_pair(currNode->right,currCol+1));
            }
        }
    }
    for(auto itr:m){
        ans.push_back(itr.second);
    }
    return ans;
}
int main(){
    Node* rootNode=new Node(2);
    rootNode->left=new Node(4);
    rootNode->right=new Node(10);
    rootNode->left->left=new Node(6);
    rootNode->left->right=new Node(5);
    rootNode->right->right=new Node(11);
    rootNode->right->right->right=new Node(12);
    vector<int> result=top_View_BT(rootNode);
    for(int ele:result){
        cout<<ele<<" ";
    }
return 0;
}