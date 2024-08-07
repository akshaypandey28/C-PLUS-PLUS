#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/description/   1st solution*/
/* Burning Tree GFG   and leetcode 2385  2nd solution*/
struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    //store the parents of every node
    unordered_map<TreeNode*,TreeNode*> parent;
    void f(TreeNode* root){
        queue<TreeNode*> qu;
        qu.push(root);
        while(qu.empty()!=1){
            TreeNode* curr=qu.front();
            qu.pop();
            if(curr->left){
                parent[curr->left]=curr;
                qu.push(curr->left);
            }
            if(curr->right){
                parent[curr->right]=curr;
                qu.push(curr->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        f(root);
        vector<int> ans;
        unordered_set<TreeNode*> vis;
        queue<TreeNode*> qu;
        int distance=0;
        qu.push(target);
        vis.insert(target);
        while(qu.empty()!=1){
            int size=qu.size();
            
            if(distance==k) break; 
            
            for(int i=0; i<size; i++){
                TreeNode* curr=qu.front();
                qu.pop();
                // Visit left child
                if (curr->left && vis.find(curr->left) == vis.end()) {
                    qu.push(curr->left);
                    vis.insert(curr->left);
                }

                // Visit right child
                if (curr->right && vis.find(curr->right) == vis.end()) {
                    qu.push(curr->right);
                    vis.insert(curr->right);
                }

                // Visit parent node
                if (parent.find(curr) != parent.end() && vis.find(parent[curr]) == vis.end()) {
                    qu.push(parent[curr]);
                    vis.insert(parent[curr]);
                }
            }
            distance++;     
            
        }
        
        while(qu.empty()!=1){
            ans.push_back(qu.front()->val);
            qu.pop();
        }
        return ans;
    }
};

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  //863. All Nodes Distance K in Binary Tree leetcode
   //store the parents of every node
    unordered_map<Node*,Node*> parent;
    void f(Node* root){
        queue<Node*> qu;
        qu.push(root);
        while(qu.empty()!=1){
            Node* curr=qu.front();
            qu.pop();
            if(curr->left){
                parent[curr->left]=curr;
                qu.push(curr->left);
            }
            if(curr->right){
                parent[curr->right]=curr;
                qu.push(curr->right);
            }
        }
    }
    void findTargetNode(Node* root,int tar,Node* &target){
        if(root==NULL) return ;
        if(root->data==tar) {
            target=root;
            return ;
        }
        findTargetNode(root->left,tar,target);
        findTargetNode(root->right,tar,target);
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        f(root);
        Node* tar;
        findTargetNode(root,target,tar);
        vector<int> ans;
        unordered_set<Node*> vis;
        queue<Node*> qu;
        int time=0;
        qu.push(tar);
        vis.insert(tar);
        while(qu.empty()!=1){
            int size=qu.size();
            bool progress = false; // To track if we are making progress in this level
            for(int i=0; i<size; i++){
                Node* curr=qu.front();
                qu.pop();
                // Visit left child
                if (curr->left && vis.find(curr->left) == vis.end()) {
                    qu.push(curr->left);
                    vis.insert(curr->left);
                    progress = true;
                }

                // Visit right child
                if (curr->right && vis.find(curr->right) == vis.end()) {
                    qu.push(curr->right);
                    vis.insert(curr->right);
                    progress = true;
                }

                // Visit parent node
                if (parent.find(curr) != parent.end() && vis.find(parent[curr]) == vis.end()) {
                    qu.push(parent[curr]);
                    vis.insert(parent[curr]);
                    progress = true;
                }
            }
            if (progress) time++;    
        }
        return time;
    }
};
int main(){
return 0;
}