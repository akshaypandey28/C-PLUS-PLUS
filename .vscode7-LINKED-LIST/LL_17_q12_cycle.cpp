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
bool detectcycle(node* &head){
    if(head==NULL){
        return false;
    }
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){//two condition beacause of 
        slow=slow->next;  //even and odd ll
        fast=fast->next->next;
        if(slow==fast){
            cout<<slow->val<<"values"<<endl;
            return true;
        }
    }
    return false;  }
void removecycle(node* &head){//assuming that ll has a cycle
    node* slow=head;     node* fast=head;
    do   
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
       fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next; }
    slow->next=NULL;     }
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.insertattail(7);
    ll.insertattail(8);
    ll.display();
    ll.head->next->next->next->next->next->next->next->next=ll.head->next->next;
    cout<<detectcycle(ll.head)<<endl;
    cout<<"after removing cycle"<<endl;
    removecycle(ll.head);
    ll.display();       return 0;     }