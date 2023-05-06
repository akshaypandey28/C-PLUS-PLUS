#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
class Stacks{

    Node* head;
    int capacity;
    int currSize;
    public :
    Stacks(int c){
        this->capacity=c;
        this->currSize=0;
        head=NULL;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    bool isFull(){
        return this->currSize==capacity;
    }
    void push(int data){
        if(this->currSize==this->capacity){
            cout<<"OVERFLOW"<<endl;
            return ;
        }
        Node* new_node=new Node(data);
        new_node->next=this->head;
        this->head=new_node;
        currSize++;
    }
    int pop(){
        if(head==NULL){
            cout<<"UNDERFLOW\n";
            return INT16_MIN;
        }
        Node* temp=this->head->next;  // this is new head
        this->head->next=NULL;//this is disconnecting of head ka next such that access na rhe null hone ki wjh 
        //se head->next me null hoga aur access finish
        Node* tobeRemoved=this->head;  //because i want to get the value that is going to be deleted
        int result=tobeRemoved->data; //and here i store it in the result variable
        delete tobeRemoved;
        this->head=temp;
        return result;
    }
    int size(){
        return this->currSize;
    }
    int getTop(){
        if(head==NULL){
            cout<<"UNDERFLOW\n";
            return INT16_MIN;
        }
        return this->head->data;
    }
};
int main(){
    Stacks st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.push(4);
    st.push(5);
    cout<<st.getTop()<<endl;
    st.push(8);
    st.pop();
    st.pop();
    cout<<st.getTop()<<endl;
return 0;
}