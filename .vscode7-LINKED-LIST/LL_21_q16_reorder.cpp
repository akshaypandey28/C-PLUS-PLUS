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
node* reorder(node* &head){
    //can check if ll has at least 3 nodes
    //finding the middle element
    node* slow=head;    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;    }
    //when loops ends slow is pointing to the middle element
    //separate the ll and reverse the second half from middle element
    node* curr=slow->next;
    slow->next=NULL;
    node* prev=slow;
    while(curr!=NULL){
        node* nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    //now curr is at the null and prev is at the last node
    //merging the two halved of the ll
    node* head1=head; /// ll for first half
    node* head2=prev; // ll for second half
    while(head1!=head2){
        node* temp=head1->next;
        head1->next=head2;
        head1=head2;//because when above steps takes place then head 1 becomes 
        //1->6->5->4->NULL that's why we want to add at next of 6 value so for
        //this we have to make 6 as new head so that same steps will take place
        //again and 6 is at head2 
        head2=temp;    }
    return head;     }
int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
    ll.display();
    ll.head=reorder(ll.head);
    ll.display();
return 0;     }