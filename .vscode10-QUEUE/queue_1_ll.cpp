#include<bits/stdc++.h>
using namespace std;
class Node{  //time O(1) that is constant time operation
    public :
    int val;
    Node* next;
    Node(int data){
        this->val=data;
        this->next=NULL;
    }
};
class Queue{
    Node* head;
    Node* back;
    int currSize;
    //int capacity;
    public : 
    Queue(){ //int capa
        //this->capacity=capa;
        this->currSize=0;
        this->head=NULL;
        this->back=NULL;
    }
    void EnQueue(int data){
        /* if(this->currSize==this->capacity){
            cout<<"OVERFLOW"<<endl;
            return ;
        } */
        Node* new_node=new Node(data);
        if(this->head==NULL){ //ll is empty
            //new_node->next=this->back;
            this->back=new_node;
            this->head=new_node;  
        }
        else{
        //new_node->next=this->back;
        this->back->next=new_node;
        this->back=new_node;
        }
        this->currSize++;
    }
    void Deque(){
        if(this->head==NULL){
            cout<<"UNDERFLOW"<<endl;
            return ;
        }
        else{
        Node* old_head=this->head;
        Node* new_head=this->head->next;
        this->head=new_head;
        if(this->head==NULL){
            this->back=NULL;
        }
        old_head->next=NULL;
        delete old_head;
        this->currSize--;
      }
    }
    int front(){
        if(this->head==NULL){
            cout<<"UNDERFLOW"<<endl;\
            return INT16_MIN;;
        }
        return this->head->val;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return (this->head!=NULL && this->back==NULL); 
    }
    int size(){
        return this->currSize;
    }
};
int main(){
        Queue qu;
        qu.EnQueue(1); //1 2 3 4 
        qu.EnQueue(2);
        qu.EnQueue(3);
        qu.EnQueue(4); //1 2 3 4
        qu.Deque(); 
        cout<<qu.size()<<endl;//2 3 4 
        while(qu.isEmpty()!=1){
            cout<<qu.front()<<" ";
            qu.Deque();
        } cout<<endl;
        cout<<qu.size()<<endl;
return 0;
}