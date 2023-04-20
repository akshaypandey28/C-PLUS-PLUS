#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int val;   
    node* next;
    node(int data){
        val=data;
        next=NULL;    }  
};
class linkedlist{
    public :
    node* head;
    linkedlist(){
        head=NULL;    }
    void insertattail(int value){ //ll is empty
    node* new_node=new node(value);
    if(head==NULL){
        head=new_node;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;  }
    temp->next=new_node; 
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;    }
        cout<<"NULL"<<endl;
    }
};
node* reversell(node* &head ,int k){
    node* prevptr=NULL;
    node*  currptr=head;
    int count=0;//for counting first k nodes
    while(currptr!=NULL && count<k){//reversing first k nodes
        node* nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;    }
    //currptr will give us (k+1)th node
    if(currptr!=NULL){
    node* new_head=reversell(currptr,k); //recursive call
    head->next=new_head;
    }
    return prevptr; //it gives the new_head of connected ll
}
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.display();
    ll.head=reversell(ll.head,2);
    ll.display();  return 0;   }