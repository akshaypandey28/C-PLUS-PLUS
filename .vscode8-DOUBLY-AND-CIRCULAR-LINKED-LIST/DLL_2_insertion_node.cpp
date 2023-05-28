#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;
    node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class doublyLinkedList{
    public:
    node* head;
    node* tail;
    doublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertatstart(int value){
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }
    void insertatend(int value){
        node* new_node=new node(value);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return ;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    void insertatposition(int value,int k){ //assuming k <= n
        node* temp=head;
        int count =1;
        while(count < (k-1)){ //count !=k-1
            temp=temp->next;
            count++;
        }
        //temp is pointing to the (k-1)th node
        node* new_node=new node(value);
        new_node->next=temp->next;//pointing in the forward direction
        temp->next=new_node; //pointing in the forward direction
        new_node->prev=temp; //pointing in the backward direction
        new_node->next->prev=new_node;//pointing in the backward direction
        return;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
int main(){
    doublyLinkedList dll;
    /* dll.insertatstart(1);
    dll.insertatstart(2);
    dll.insertatstart(3);
    dll.display(); */
    dll.insertatend(1);
    dll.insertatend(2);
    dll.insertatend(3);
    dll.insertatend(5);
    dll.display();
    dll.insertatposition(4,3);
    dll.display();
return 0;
}