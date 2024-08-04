#include<bits/stdc++.h>//reverse stack recursively
using namespace std;
void insertAtBottom(stack<int> &st1,int val){//here val takes  curr
    stack<int> temp;
    while(st1.empty()==0){ //not st1.empty()
        int curr=st1.top();
        st1.pop();
        temp.push(curr);  
    }
    st1.push(val);
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st1.push(curr);   
    }
}
void reverseStackusingCallStack(stack<int> &st1){
    if(st1.empty()) return ;
    int curr=st1.top();
    st1.pop();
    reverseStackusingCallStack(st1);
    insertAtBottom(st1,curr);    
}
int main(){
    stack<int> st1;
    st1.push(1);     
    st1.push(2);
    st1.push(3);     
    st1.push(4);
    st1.push(5);
    reverseStackusingCallStack(st1);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   
    }  
    return 0;    
    }