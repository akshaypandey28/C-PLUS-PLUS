#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//DELTETION
class Solution {
public:
    TreeNode* iop(TreeNode* root){
        //go left then keep going right
        TreeNode* pred=root->left;
        while(pred->right!=NULL){
            pred=pred->right;
        }
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val == key ) {
            // case 1 : no child 
            if(root->left==NULL and root->right==NULL) return NULL;

            // case 2 : with 1 child
            if(root->left==NULL || root->right==NULL) {
                if(root->left!=NULL) return root->left;
                return root->right;  // root->right!=NULL
            }

            // case 3: with 2 child
            if(root->left!=NULL and root->right!=NULL){ // else can also be written 
                //replace the root with its inorder predeccessor or successor
                //problem is solved in predeccessor method
                //after replacing delete the predeccessor or successor
                TreeNode* pred=iop(root);
                root->val=pred->val;
                root->left = deleteNode(root->left,pred->val);
            }

        }
        else if( root->val > key ){ //go left
            root->left = deleteNode(root->left,key);
        } 
        else{ // go right
            root->right = deleteNode(root->right,key);
        }
        return root;
    }
};


//INSERTION
void insert(TreeNode* root,int val){
        if(root==NULL) return ;
        if(root->val > val){ //go left 
            if(root->left==NULL){
                root->left=new TreeNode(val);
                return ;
            }
            else insert(root->left,val);
        }
        else{ //(root->val < val ) go right
            if(root->right==NULL){
                root->right=new TreeNode(val);
                return ;
            }
            else insert(root->right,val);
        }
}

//SUCCESSOR
class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* ans = nullptr;
        while (root) {
            if (root->val > p->val) {
                ans = root;
                root = root->left;
            } else {
                root = root->right;
            }
        }
        return ans;
    }
};

//PREDECESSOR
class Solution {
public:
    TreeNode* inorderPredecessor(TreeNode* root, TreeNode* p) {
        TreeNode* ans = nullptr;
        while (root) {
            if (root->val < p->val) {
                ans = root;
                root = root->right;
            } else {
                root = root->left;
            }
        }
        return ans;
    }
};

int main(){
return 0;
}