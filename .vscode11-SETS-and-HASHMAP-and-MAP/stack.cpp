#include<bits/stdc++.h>
using namespace std;
int kthSmallestElement(vector<int> &a){
    stack<int> st;
    stack<int> temp;
    st.push(a[0]);
    for(int i=1; i<a.size(); i++){
        while(a[i]>st.top() && st.size()!=0){
            temp.push(st.top());
            st.pop();
        }
        st.push(a[i]);
        while(temp.empty()!=1){
            st.push(temp.top());
            temp.pop();
        }
    }
    while(st.empty()!=1){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return st.top();
}
int main(){
    vector<int> a={1,55,28,33,2};
    int result=kthSmallestElement(a);
return 0;
}