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
void duplicates(node* &head){
    node* curr_node=head;
    while(curr_node!=NULL){
       while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){//for traversing the whole ll
            node* temp=curr_node->next;//node to be deleted
            curr_node->next=curr_node->next->next;
            free(temp);
        } //this loop ends when current node and next node values are different
        //or ll ends
        curr_node=curr_node->next;
    }
}
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(3);
    ll.insertattail(3);
    ll.display();
    duplicates(ll.head);
    ll.display();    return 0;   }