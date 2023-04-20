#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int val;
    node* next;
    node(int data){
        val=data;
        next=NULL;
    }
};
void insertathead(node* &head,int data){
    //new node creation
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* node1=new node(10);
    node* head=node1;//head pointed to node1
    print(head);

    insertathead(head,12);
    print(head);

return 0;
}