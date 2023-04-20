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
node* rotatebyk(node* &head,int k){
    //find length 
    int n=0;
    //find tail node
    node* tail=head;
    while(tail->next!=NULL){
        n++;
        tail=tail->next;
    }
    n++; //because last node is not counted that's why n is n increased
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;
    //traverse n-k nodes
    node* temp=head;
    for(int i=1; i<n-k; i++){
        temp=temp->next;
    }
    //temp is pointing to n-k node
    node* new_head=temp->next;
    temp->next=NULL;
    return new_head;
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
    ll.head = rotatebyk(ll.head,3);
    ll.display();    
return 0;     }