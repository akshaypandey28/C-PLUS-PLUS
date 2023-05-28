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
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
void reverse(node* &head,node* &tail){
        node* currrptr=head;
        while(currrptr!=NULL){
            node* nextptr=currrptr->next;
            currrptr->next=currrptr->prev;
            currrptr->prev=nextptr;
            currrptr=nextptr;
        }
        //swapping head and tail pointer
        node* new_head=tail;
        tail=head;
        head=new_head;
}
int main(){
    doublyLinkedList dll;
    dll.insertatend(1);
    dll.insertatend(2);
    dll.insertatend(3);
    dll.insertatend(4);
    dll.insertatend(5);
    dll.display();
    reverse(dll.head,dll.tail);
    dll.display();
return 0;
}