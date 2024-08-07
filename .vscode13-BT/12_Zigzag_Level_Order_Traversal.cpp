#include<bits/stdc++.h>
using namespace std;
//leetcode 103
//Definition for a binary tree node.
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
    int findLevel(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(findLevel(root->left) ,findLevel(root->right));
    }
    void preLtoR(TreeNode* root,int currLevel,int reqLevel,vector<int> &temp){
        if(root==NULL) return ;
        if(currLevel==reqLevel) {
            temp.push_back(root->val);
            return ;
        }
        preLtoR(root->left,currLevel+1,reqLevel,temp);
        preLtoR(root->right,currLevel+1,reqLevel,temp);
    }
    void preRtoL(TreeNode* root,int currLevel,int reqLevel,vector<int> &temp){
        if(root==NULL) return ;
        if(currLevel==reqLevel) {
            temp.push_back(root->val);
            return ;
        }
        preRtoL(root->right,currLevel+1,reqLevel,temp);
        preRtoL(root->left,currLevel+1,reqLevel,temp);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > ans;
        
        int n=findLevel(root);
        for(int i=1; i<=n; i++){
            vector<int> temp;
            if(i%2==0) preRtoL(root,1,i,temp);
            else preLtoR(root,1,i,temp);
            
            ans.push_back(temp);
        }
        return ans;
    }
};
/*  

class Solution {
public:
    vector<vector<int>> ZigZagLevelOrder(Node* root){
        vector<vector<int>> result;
        if(root == NULL){
            return result;
        }
        queue<Node*> nodesQueue;
        nodesQueue.push(root);
        
        bool leftToRight = true;
        
        while(!nodesQueue.empty()){
            // Get the number of nodes at the current level
            int size = nodesQueue.size();
            
            // Vector to store the values of nodes at the current level
            vector<int> row(size);
            
            // Traverse nodes at the current level
            for(int i = 0; i < size; i++){
                Node* node = nodesQueue.front();
                nodesQueue.pop();
                
                // Determine the index to insert the node's value based on the traversal direction
                int index = leftToRight ? i : (size - 1 - i);
                
                // Insert the node's value at the determined index
                row[index] = node->data;
                
                if(node->left){
                    nodesQueue.push(node->left);
                }
                if(node->right){
                    nodesQueue.push(node->right);
                }
            }
            // Switch the traversal direction for the next level
            leftToRight = !leftToRight;
            
            // Add the current level's values to the result vector
            result.push_back(row);
        }
        return result;
    }
};

*/
int main(){
return 0;
}
