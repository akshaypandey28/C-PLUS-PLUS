#include<bits/stdc++.h>
using namespace std;
class node{
    public :
    int val;   
    node* next;
    node(int data){
        val=data;
        next=NULL;    }  
};
class linkedlist{
    public :
    node* head;
    linkedlist(){
        head=NULL;    }
    void insertattail(int value){ //ll is empty
    node* new_node=new node(value);
    if(head==NULL){
        head=new_node;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;  }
    temp->next=new_node; 
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;    }
        cout<<"NULL"<<endl;
    }
};
int getlength(node* head){
    node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}
node* moveheadbyK(node* head,int k){
    node* ptr=head;
    while(k--){ //(k>0)
    ptr=ptr->next;
    }
    return ptr;
}
node* getintersection(node* head1,node* head2){
    //step1: calculate lenghts of both ll
    int l1=getlength(head1);
    int l2=getlength(head2);
    //step2: find difference k between ll and move longer ll ptr by k step
    node* ptr1;    node* ptr2;
    if(l1>l2){ // ll1 is longer
        int k=l1-l2;
        ptr1=moveheadbyK(head1,k);
        ptr2=head2;
    }
    else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveheadbyK(head2,k);
    }
    //itna krne ke bad dono ll ka linking point same ho jayega aur intersection 
    //point ke aage ya piche dono equal length hoga iska mtlb jis point pr 
    //intersect krega dono ptr ek sath wha reach krenge
    //step3: compare ptrr1 and ptr2 nodes for intersection
    while(ptr1!=NULL){ //(ptr1!=NULL && ptr2!=NULL) 
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;    }
int main(){
    linkedlist ll1;
    ll1.insertattail(1);
    ll1.insertattail(2);
    ll1.insertattail(3);
    ll1.insertattail(4);
    ll1.insertattail(5);
    ll1.display();//1->2->3->4->5->NULL
    linkedlist ll2;
    ll2.insertattail(6);
    ll2.insertattail(7);
ll2.head->next->next=ll1.head->next->next->next; //6->7->4->5->NULL
    ll2.display();
    node* intersection=getintersection(ll1.head,ll2.head);
    if(intersection!=NULL){
        cout<<intersection->val<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
return 0;     }