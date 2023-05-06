#include<bits/stdc++.h>
using namespace std;
void copyStack(stack<int> &st1,stack<int> &st2 ){
    if(st1.empty()){ //if st1 gets empty then st1.empty() 
    //becomes equal to 1
        return ;
    }
    int curr=st1.top();
    st1.pop();
    copyStack(st1,st2);
    st2.push(curr);
}
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    stack<int> st2;
    copyStack(st1,st2);
    while(!st2.empty()){
        cout<<st2.top()<<endl;
        st2.pop();
    }
return 0;
}