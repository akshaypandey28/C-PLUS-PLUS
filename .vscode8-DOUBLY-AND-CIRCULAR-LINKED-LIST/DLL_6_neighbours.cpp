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
void deleteneighbours(node* &head,node* &tail){
    node* currptr=tail->prev;//second last node
    while(currptr!=head){
        node* prevptr=currptr->prev;
        node* nextptr=currptr->next;
        if(prevptr->val==nextptr->val){
            //i need to delete the current node 
            prevptr->next=nextptr;
            nextptr->prev=prevptr;
            free(currptr);
        }
        currptr=prevptr;
    }
}
int main(){
    doublyLinkedList dll;
    dll.insertatend(2);
    dll.insertatend(1);
    dll.insertatend(1);
    dll.insertatend(2);
    dll.insertatend(1);
    //dll.insertatend(6);
    dll.display();
    deleteneighbours(dll.head,dll.tail);
    dll.display();
return 0;
}