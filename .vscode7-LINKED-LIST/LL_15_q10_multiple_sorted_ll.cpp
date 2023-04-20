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
node* mergedll(node* &head1,node* &head2){
    node* dummyheadnode=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyheadnode; //dono ptr ek sath null nhi honge koi ek ptr
    while( ptr1!=NULL && ptr2!=NULL){//piche hoga aur ek ptr null ko point krega
    if(ptr1->val < ptr2->val){
        ptr3->next=ptr1;
        ptr1=ptr1->next;   }
    else{
        ptr3->next=ptr2;
        ptr2=ptr2->next;    }
    ptr3=ptr3->next;
    }
    if(ptr1!=NULL){
        ptr3->next=ptr1;    }
    else{
        ptr3->next=ptr2;      }
    return dummyheadnode->next;      }
node* mergedkll(vector< node* > & lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size() > 1){
       node* mergedhead = mergedll(lists[0],lists[1]);
       lists.push_back(mergedhead);
       lists.erase(lists.begin());
       lists.erase(lists.begin());
    }
    return lists[0]; }
//bar bar do head ka sorting hoga aur push_back hoga aur jinka sorting hua hai
//unko delete kr denge aisa bar bar hoke finally
//vector me ek hi ll bacha hoga usko return kr denge i.e.lists[0]  
int main(){
    linkedlist ll1;
    ll1.insertattail(1);
    ll1.insertattail(7);
    ll1.insertattail(8);      ll1.display();
    linkedlist ll2;
    ll2.insertattail(2);
    ll2.insertattail(4);
    ll2.insertattail(5);      ll2.display();
    linkedlist ll3;
    ll2.insertattail(3);
    ll2.insertattail(6);      ll2.display();
    vector< node* >lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);
    linkedlist ll4;
    ll4.head=mergedkll(lists);
    ll4.display();
return 0;     }