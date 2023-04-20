#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int data){
        val=data;
        next=NULL;
    }
};
int main(){
    node* n=new node(10);
    cout<<n->next<<" "<<n->val;
    
return 0;
}