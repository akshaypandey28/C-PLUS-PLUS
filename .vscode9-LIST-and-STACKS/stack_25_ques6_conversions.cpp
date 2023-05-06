//conversion of a prefix expressions to a postfix expression
#include<bits/stdc++.h>
using namespace std; //time and space O(n)
string convert(string &pre){
    stack<string> st;
    reverse(pre.begin(),pre.end());
    for(int i=0; i<pre.size() ; i++){
        if(isdigit(pre[i])){
            st.push(to_string(pre[i]-'0'));
        }
        else{
            string v1=st.top();
            st.pop();
            string v2=st.top();
            st.pop();
            string newexp=v1+v2+pre[i];
            st.push(newexp);
        }
    }
    return st.top();
}
int main(){
    string pre="*+31-15";
    cout<<convert(pre)<<endl;
return 0;
}