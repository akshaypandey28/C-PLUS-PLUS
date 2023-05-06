//copy one stack to another stack
#include<bits/stdc++.h>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &st1){
stack<int> temp;//beacuse when we copy one stack to another then it 
//copy in reverse order that means i have to make one another stack
//such that i copy temp stack in st2 it follows same rule this get 
//again copy i found my desires answer
    while(!st1.empty()){ //jab tak empty na ho  st1.empty()==0
        int curr=st1.top();
        st1.pop();
        temp.push(curr);   }
    stack<int> st2;
    while(!temp.empty()){ //jab tak empty na ho temp.empty()==0
        int curr=temp.top();
        temp.pop();
        st2.push(curr);    }
    return st2;   }
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    stack<int> st2=copyStack(st1);
    while(! st2.empty()){ //jab tak empty na ho st2.empty()
        cout<<st2.top()<<endl;
        st2.pop();    }   return 0;    }