#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data = x;
        next = NULL;   }
};
void print(Node *head){
    Node *temp=head;
	while (temp) {
        cout << temp->data << " ";
        temp = temp->next; }
    cout<<endl; 
}
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)  {
        int size=0;
        Node *temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;   }
        Node *prev=NULL;
        Node *curr=head;
        while(curr!=NULL){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
        delete(curr);
        head=prev;
        Node *tem=head;
	while (tem) {
        cout << tem->data << " ";
        tem = tem->next; }
    cout<<endl;
    cout<<endl;
    cout<<endl;
        if(size%2==0){
        vector<int> a;
        int count=0;
        Node *temp=head;
        while(count<size/2){
            a.push_back(temp->data);
            temp=temp->next;
            count++;
        }
        
        reverse(a.begin(),a.end());
        for(int i=0; i<3; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        int j=0;
        Node *cur=head;
        Node *te=temp;
        while(te!=NULL || cur!=temp){
            a[j]=a[j]-te->data;
            cout<<cur->data<<" ";
            te=te->next;
            cur=cur->next;
            j++;
        }
        reverse(a.begin(),a.end());
        count=0;
        temp=head;
        while(count<size/2){
            temp->data=a[j];
            temp=temp->next;
            count++;
        }
        head=prev;
       }
    }
};
int main(){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
    return 0;
}