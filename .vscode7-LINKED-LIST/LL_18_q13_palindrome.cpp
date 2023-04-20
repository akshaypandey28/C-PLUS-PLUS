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
bool palindrome(node* &head){
    node* slow=head;
    node* fast=head;
    //finding of middle element
    while(fast!=NULL && fast->next!=NULL){ //because of even or odd ll
        slow=slow->next;
        fast=fast->next->next;    }
    //now slow is pointing to middle element 
    //break the ll in the middle
    node* curr=slow->next;
    slow->next=NULL;
    node* prev=slow;
    //reverse the second half of ll
    while(curr!=NULL){
        node* next =curr->next;
        curr->next=prev;
        prev=curr;
        curr=next; }
    //to check if the two ll are equal
    node* head1=head;
    node* head2=prev;
    while(head2!=NULL){
        if(head1->val!=head2->val){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(3);
    ll.insertattail(2);
    ll.insertattail(1);
    ll.display();
    cout<<palindrome(ll.head)<<endl;
return 0;     }