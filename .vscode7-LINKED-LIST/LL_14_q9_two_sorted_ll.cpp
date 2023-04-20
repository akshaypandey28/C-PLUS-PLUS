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
node* mergedll(node* &head1,node* &head2){
    node* dummyheadnode=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyheadnode; //dono ptr ek sath null nhi honge koi ek ptr
    while( ptr1!=NULL && ptr2!=NULL){//piche hoga aur ek ptr null ko point krega
    if(ptr1->val < ptr2->val){
        ptr3->next=ptr1;
        ptr1=ptr1->next;   }
    else{
        ptr3->next=ptr2;
        ptr2=ptr2->next;    }
    ptr3=ptr3->next;
    }
    if(ptr1!=NULL){
        ptr3->next=ptr1;    }
    else{
        ptr3->next=ptr2;      }
    return dummyheadnode->next;      }
int main(){
    linkedlist ll1;
    ll1.insertattail(1);
    ll1.insertattail(4);
    ll1.insertattail(5);      ll1.display();
    linkedlist ll2;
    ll2.insertattail(2);
    ll2.insertattail(3);      ll2.display();
    linkedlist ll3;
    ll3.head=mergedll(ll1.head,ll2.head);
    ll3.display();
return 0;     }