//implement getMin for the stack to get min value of the stack
#include<bits/stdc++.h> 
using namespace std;
int getMin(stack<int> &st){ //Time O(n)
    int mini=INT32_MAX;    // Space O(n)
    stack<int> temp;
    while(st.empty()!=1){
        if(st.top()<mini){
            mini=st.top(); }
        st.pop();
    }
    while(temp.empty()!=1){
        int top=temp.top();
        st.push(top);
        temp.pop();  }
    return mini;    }
int main(){ //brute force appraoch
    stack<int> st;
    st.push(10);
    st.push(5);
    st.push(6);
    st.push(4); 
    st.push(13);
    int result =getMin(st);
    cout<<"the minimum value of stack is "<<result<<endl;
return 0;
}