//remove from bottom recursively
#include<bits/stdc++.h>
using namespace std;
void removefrombottom(stack<int> &st1){
    if(st1.size()==1){
        st1.pop();
        return ;
    }
    int curr=st1.top();
    st1.pop();
    removefrombottom(st1);
    st1.push(curr);
}
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    removefrombottom(st1);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   }
return 0;
}