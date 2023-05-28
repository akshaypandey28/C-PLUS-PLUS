#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int val;
    node* next;
    node(int data){
        val=data;
        next=NULL;
    }
};
class circularlinkedlist{
    public :
    node* head;
    circularlinkedlist(){
        head=NULL;
    }
    void insertionatstart(int value){
    node* new_node=new node(value);
    if(head==NULL){
        head=new_node;
        new_node->next=new_node; //or new_node->next=head;
        return;
    }
    node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    //now after loop end tail is at the last node
    tail->next=new_node;
    new_node->next=head;
    head=new_node;
    }
    void insertionatend(int value){
        node* new_node=new node(value);
        if(head==NULL){
            head=new_node;
            new_node->next=head;
            return ;
        }
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        //tail points to the last node
        
        tail->next=new_node;
        new_node->next=head;
    }
    void printcircular(){
        node* temp=head;
        for(int i=0; i<15; i++){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
    }
    void deleteatstart(){
        if(head==NULL){
            return;
        }
        node* temp=head;
        node* tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        free(temp);
    }
    void deleteatend(){
        if(head==NULL){
            return;
        }
        
        node* tail=head;
        while(tail->next->next!=head){
            tail=tail->next;
        }
        //after this tail points to second last node
        node* temp=tail->next; //to be deleted
        tail->next=head;
        free(temp);
    }
    void display(){
        node* temp=head;
        do{
            cout<<temp->val<<"->";
            temp=temp->next;
        }while(temp!=head);
        cout<<endl; //there is no null
    }
};

int main(){
    circularlinkedlist cll;
    cll.insertionatstart(1);
    cll.insertionatstart(2);
    cll.insertionatstart(3);
    cll.display();
    //cll.printcircular();
    cll.insertionatend(4);
    cll.display();
    //cll.deleteatstart();
    //cll.display();
    cll.deleteatend();
    cll.display();
return 0;
}