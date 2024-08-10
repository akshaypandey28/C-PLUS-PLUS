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
//Recursive In all approaches Time => O(n) and Space => O(n)
//except Space in morris O(1)
class Solution {
public:
    TreeNode* temp=NULL;
    void flatten(TreeNode* root) {
        if(root==NULL) return ;
        //reverse preorder traversal
        flatten(root->right);
        flatten(root->left);

        root->right=temp;
        root->left=NULL;

        temp=root;
        return ;
    }
};
//Iterative approach 
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        // Use a stack for iterative traversal.
        stack<TreeNode*> st;
        st.push(root);  
        
        while (!st.empty()) {  
            TreeNode* cur = st.top(); 
            st.pop();  

            if (cur->right != NULL) st.push(cur->right); 
 
            if (cur->left != NULL) st.push(cur->left); 


            if (!st.empty()) {
                // Connect the right child to the next node in the stack.
                cur->right = st.top();  
            }
            // Set the left child to NULL to form a right-oriented linked list.
            cur->left = NULL;  
        }
    }
};
//Morris traversal
class Solution {
public:
    void flatten(TreeNode* root) {
        // Initialize a pointer 'curr' to the root of the tree
        TreeNode* curr = root;

        while (curr) {
            if (curr->left) {
                // If yes, find the rightmost node in the left subtree
                TreeNode* pre = curr->left;
                while (pre->right) pre = pre->right;

                // Connect the rightmost node in the left subtree to the current node's right child
                pre->right = curr->right;

                // Move the entire left subtree to the right child of the current node
                curr->right = curr->left;

                // Set the left child of the current node to NULL
                curr->left = NULL;
            }
            // Move to the next node on the right side
            curr = curr->right;
        }
    }
};
int main(){
return 0;
}