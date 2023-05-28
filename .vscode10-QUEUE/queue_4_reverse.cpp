#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &qu){
    stack<int> st;
    while(qu.empty()!=1){
        st.push(qu.front());
        qu.pop();
    }
    while(st.empty()!=1){
        qu.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> qu;
    for(int i=1; i<=5; i++){
        qu.push(i);
    }
    reverseQueue(qu);
    while(qu.empty()!=1){
        cout<<qu.front()<<"  ";
        qu.pop();
    }
return 0;
}