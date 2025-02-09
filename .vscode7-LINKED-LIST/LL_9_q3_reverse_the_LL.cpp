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
node* reversell(node* &head){
    node* prev=NULL;
    node* currptr=head;
    //currptr->next=prev;
    //move all ptrs by one step ahead
    while(currptr!=NULL){
        node* nextptr=currptr->next;
        currptr->next=prev;
        //move all ptrs by one step ahead
        prev=currptr;
        currptr=nextptr;
    }
//when this loop ends,prevptr pointing to last node which is new head 
node* new_head=prev;
return new_head;
}
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.display();
    ll.head=reversell(ll.head);
    ll.display();  return 0;   }