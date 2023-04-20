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
node* swapadjacent(node* &head){
    if(head==NULL || head->next==NULL){ //base case
        return head;  // it returns null
    }
    //recursive case
    node* second_node=head->next;
    head->next=swapadjacent(second_node->next);
    second_node->next=head;//reversing the link between
    // first and second node
    return second_node;   }
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    //ll.insertattail(6);
    ll.display();
    ll.head=swapadjacent(ll.head);
    ll.display();    
return 0;     }