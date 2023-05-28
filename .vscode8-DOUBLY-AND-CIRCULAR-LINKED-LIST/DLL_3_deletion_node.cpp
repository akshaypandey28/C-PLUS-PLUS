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
    void deleteatstart(){
        if(head==NULL){
            return ;
        }
        node* temp=head;
        head=head->next;
        if(head!=NULL){ //because lets suppose there is only one node in dll
            head->prev=NULL;//then after pointing head to the next then head point 
        }//to the null so there is no node present so thats why this condition is put
        else { //head==NULL
            tail=NULL;
        }
        free(temp);
    }
    void deleteatend(){
        if(head==NULL){
            return ;
        }
        node* temp=tail;
        tail=tail->prev;
        if(tail==NULL){
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
        free(temp);
        return;
    }
    void deleteatposition(int k){
        //assuming k<=n
        node* temp=head;
        int count=1;
        while(count != k){ //(count != k)
            temp=temp->next;
            count++;
        }
        //and now temp is pointing to the kth node
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
        return ;
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
    /* dll.deleteatstart();
    dll.display(); */
    /* dll.deleteatend();
    dll.display(); */
    dll.deleteatposition(3);
    dll.display();
return 0;
}