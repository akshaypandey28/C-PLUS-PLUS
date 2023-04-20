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
void insertathead(node* &head,int data){
    node* new_node=new node(data);
    new_node->next=head;
    head=new_node;
}
void insertattail(node* &head,int data){
    node* new_node=new node(data);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;  
}
void inbetween(node* &head,int data,int pos){
    if(pos==0){
        insertathead(head,data);
        return;        
    }
    node* bw=new node(data);
    node* temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    //temp is pointing to node at pos-1
    bw->next=temp->next;
    temp->next=bw;
}
void update(node* &head,int data ,int pos){
    node* temp=head;
    int current_pos=0;
    while(current_pos!=pos){
        temp=temp->next;
        current_pos++;
    }
    //temp is pointing to the pos node
    temp->val=data;
}
void deleteathead(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
}
void deleteattail(node* &head){ 
    node* second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next; //always ek step back rhega second last 
    }
    //now second_last points to second last node
    node* temp=second_last->next; //node to be deleted
    second_last->next=NULL;
    free(temp);
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertathead(head,2); // at head
    display(head);

    insertathead(head,1);// at head
    display(head);

    insertattail(head,3);// at tail
    display(head); 

    inbetween(head,4,1); // insertion 
    display(head);

    update(head,5,2);  // updation 
    display(head);

    deleteathead(head);  //delete at head
    display(head);

    deleteattail(head);
    display(head);


return 0;
}