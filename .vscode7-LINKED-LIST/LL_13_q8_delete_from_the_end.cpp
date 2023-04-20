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
void deletekthnodefromend(node* &head,int k){
    node* ptr1=head;
    node* ptr2=head;
    //move ptr2 by k steps
    int count=k; //or int count =0
    while(count!=0){ //while(count <k){  ptr2=ptr->next;  count++;   }
      ptr2=ptr2->next;
      count--; }
    //now ptr2 is k steps ahead of ptr1
    while(ptr2->next!=NULL){ //when this loop ends ptr2 is not at the NULL
ptr1=ptr1->next; //ptr1 is at one step back of the node that has to be deleted
ptr2=ptr2->next; //ptr2 is at the last node
    }
    //when ptr2 is at null(end of list), then at that point ptr1 is reached at 
    //to the node that has to be deleted
    node* temp=ptr1->next;
    ptr1->next=ptr1->next->next;
    free(temp);
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
    deletekthnodefromend(ll.head,3);
    ll.display();      return 0;     }