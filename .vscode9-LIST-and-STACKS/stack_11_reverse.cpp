#include<bits/stdc++.h> //reverse stack
using namespace std;
/* time  : O(n)     space : O(n)    */
void reverseStack(stack<int> &st1){
    stack<int> temp1;     stack<int> temp2;
    while(st1.empty()!=1){
        int curr=st1.top();
        st1.pop();
        temp1.push(curr);    }
    while(temp1.empty()!=1){
        int curr=temp1.top();
        temp1.pop();
        temp2.push(curr);     }
    while(temp2.empty()!=1){
        int curr=temp2.top();
        temp2.pop();
        st1.push(curr);  }    }
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    reverseStack(st1);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   }   return 0;    }