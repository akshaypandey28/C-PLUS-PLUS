//insert_at_bottom/  recursively
#include<bits/stdc++.h>
using namespace std;
/* time  : O(n)
   space : O(n)    */
void insertAtBottomRe(stack<int> &st1,int val){
    if(st1.empty()==1){
        st1.push(val);
        return;     }
    int curr=st1.top();
    st1.pop();
    insertAtBottomRe(st1,val);
    st1.push(curr);     }
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    insertAtBottomRe(st1,10);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   }
return 0; }