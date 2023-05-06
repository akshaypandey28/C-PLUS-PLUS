//remove from any index(i.e. 0,1,2,3) recursively
#include<bits/stdc++.h>
using namespace std;
void removefrombottom(stack<int> &st1,int idx){
    if(st1.size()==idx+1){//because i want to remove from a 
//index that means elements no. is (idx+1) lets idx=2
// (2+1)th element no. to remove
        st1.pop();
        return ;   }
    int curr=st1.top();
    st1.pop();
    removefrombottom(st1,idx);
    st1.push(curr);
}
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    removefrombottom(st1,3);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   }
return 0;
}