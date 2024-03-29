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


    void del(int &n){
        node *curr=head;
            int size=0;
            while(curr!=NULL){
                size++;
                curr=curr->next;
            }

        int v=size-n;
        node *temp=head;

        int currpos=0;
        while(currpos<v-1){
            temp=temp->next;
            currpos++;
        }
        node* prev=temp->next;

        temp->next=prev->next;
        delete(prev);
    }
    node* removeNthFromEnd(int n) {
        if(head==NULL){
            return head;
        }
        del(n);
        return head;
    }
};

int main(){
    linkedlist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.display();
    int k; cin>>k;
    ll.removeNthFromEnd(k);
    ll.display();
return 0;     }