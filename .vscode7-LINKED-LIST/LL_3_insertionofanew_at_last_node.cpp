#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertathead(Node* &head,int value){
    Node* new_node=new Node(value);
    new_node->next = head;
    head=new_node;
}
void insertattail(Node* &head,int data){
    Node* new_node=new Node(data);
    Node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    //temp has reached the last node
    temp->next=new_node;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertattail(head,3);
    display(head);
return 0;
}
