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
node* oddeven(node* &head){
    if(head=NULL){
        return head;
    }
    node* even_head=head->next;
    node* even=even_head; //cannot pass head here
    //node* odd_head=head;
    node* odd=head;
    while(even!=NULL && even->next!=NULL){//for even and odd no of nodes respectively
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    //null ya next wala null reach krte hi us particular point ko already 
    //ho chuka hoga even or odd me
    odd->next=even_head;
    return head ;

}
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.display();
    ll.head=oddeven(ll.head);
    ll.display();  // segmentation fault
return 0;     }