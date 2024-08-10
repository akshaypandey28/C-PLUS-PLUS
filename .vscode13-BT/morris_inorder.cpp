#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//Threaded binary tree concept is used in morris traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector < int > inorder;
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left==NULL){
                inorder.push_back(curr->val);
                curr=curr->right;
            }
            else{ //find predecessor
                TreeNode* prev=curr->left;
                while(prev->right!=NULL && prev->right!=curr){ // prev->right!=curr because last me 
                //right most node ko us time ke particular root se link kr diya ja rha hai curr->right
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    prev->right=curr;
                    curr=curr->left;
                }
                else{
                    prev->right=NULL;
                    inorder.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return inorder;
    }
};
int main(){
return 0;
}