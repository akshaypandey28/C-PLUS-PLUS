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
bool checkll(node* head1,node * head2){
    node* ptr1=head1;
    node* ptr2=head2;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    //at this point either ptr1 is null or ptr 2 is null or both are null
    return (ptr1==NULL && ptr2==NULL);//true or false return value
}
int main(){
    linkedlist ll1;
    ll1.insertattail(1);
    ll1.insertattail(2);
    ll1.insertattail(3);
    ll1.insertattail(4);
    ll1.insertattail(5);
    ll1.display();
    linkedlist ll2;
    ll2.insertattail(1);
    ll2.insertattail(2);
    ll2.insertattail(3);
    ll2.insertattail(4);
    ll2.insertattail(5);
    ll2.display();
    cout<<checkll(ll1.head,ll2.head)<<endl;
return 0;
}