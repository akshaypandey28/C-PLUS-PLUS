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
    
    
};
int main(){
    node* new_node=new node(3);
    doublyLinkedList dll;
    dll.head=new_node;
    dll.tail=new_node;
    cout<<dll.head->val<<endl;
return 0;
}