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
void insertathead(node* &head,int val){
    node* new_node=new node(val);
    new_node->next=head;
    head=new_node;
}
void insertattail(node* &head,int data){
    node* new_node=new node(data);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;  
}
void display(node* &head){
    node* traverse=head;
    while(traverse!=NULL){
        cout<<traverse->val<<" ";
        traverse=traverse->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertathead(head,10);
    display(head);

    insertathead(head,20);
    display(head);

    insertattail(head,30);
    display(head);

return 0;
}