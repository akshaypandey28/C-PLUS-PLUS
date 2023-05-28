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
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }cout<<"NULL"<<endl;
    }
};
bool iscp(node* currnode){
    if(currnode->prev->val < currnode->val && currnode->next->val < currnode->val){//local maxima
        return true;
    }
    if(currnode->prev->val > currnode->val && currnode->next->val > currnode->val){//local minima
        return true;
    }
    return false;
}
vector<int> distancebwcp(node* head,node* tail){
    vector<int> ans(2,INT32_MAX);
    int firstcp=-1; int lastcp=-1;
    node* currptr=tail->prev;  //currptr is currnode
    if(currptr==NULL){
        ans[0]=ans[1]=-1;
        return ans;
    }
    int currpos=0;
    while(currptr->prev!=NULL){ //while(currptr!=head)
        if(iscp(currptr)==true){
            if(firstcp==-1){ //check ho rha hai first cp mila hai ya nhi
                firstcp = lastcp = currpos;
            }
            else{ //agr first cp nhi hua to else use krke last ko update karenge 
                ans[0]=min(ans[0],currpos-lastcp);//minimum distance
                ans[1]=currpos-firstcp; //maximum distance
                lastcp=currpos;
            }
        }
        currpos++;
        currptr=currptr->prev;
    }
    if(ans[0]==INT32_MAX){
        ans[0]=ans[1]=-1;
    }
    return ans;

}
int main(){
    doublyLinkedList dll;
    dll.insertatend(1);
    dll.insertatend(5);
    dll.insertatend(2);
    dll.insertatend(6);
    dll.insertatend(3);
    //dll.insertatend(6);
    dll.display();
    vector<int> ans =distancebwcp(dll.head,dll.tail);
    cout<<ans[0]<<"  "<<ans[1]<<endl;
return 0;
}