#include<bits/stdc++.h>
using namespace std;
void insertatAnyIndex(stack<int> &st1,int idx,int val){
    int n=st1.size();    int count=0;
    stack<int> temp;
    while(count < n-idx){
        count++;
        int curr=st1.top();
        st1.pop();
        temp.push(curr);   }
    st1.push(val);
    while(temp.empty()!=1){
        int curr=temp.top();
        temp.pop();
        st1.push(curr);   }
}
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    insertatAnyIndex(st1,1,100);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   }
return 0;  }