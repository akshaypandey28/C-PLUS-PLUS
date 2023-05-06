//insert_at_bottom/ any index
#include<bits/stdc++.h>
using namespace std;
/* time  : O(n)
   space : O(n) 
 */
void insertAtBottom(stack<int> &st1,int x){
    stack<int> temp;
    while(st1.empty()==0){ //not st1.empty()
        int curr=st1.top();
        st1.pop();
        temp.push(curr);  }
    st1.push(x); //this is the point where x got
    // inserted at the bottom
    while(not temp.empty()){
        int curr=temp.top();
        temp.pop();
        st1.push(curr);   }
}
int main(){
    stack<int> st1;
    st1.push(1);     st1.push(2);
    st1.push(3);     st1.push(4);
    st1.push(5);
    insertAtBottom(st1,10);
    while(st1.empty()==0){
        cout<<st1.top()<<endl;
        st1.pop();   }
return 0;   }