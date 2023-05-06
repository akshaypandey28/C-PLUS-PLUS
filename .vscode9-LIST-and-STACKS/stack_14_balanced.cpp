#include<bits/stdc++.h>
using namespace std;
bool isValid(string str){
    stack<char> st;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(ch=='['  || ch=='{' || ch=='('){
            st.push(ch);   }
        else{ // that means a closing bracket
            if(ch==')' && st.empty()!=1 && st.top()=='('){
                st.pop();  }
            else if(ch==']' && st.empty()!=1 && st.top()=='['){
                st.pop();  }
            else if(ch=='}' && st.empty()!=1 && st.top()=='{'){ 
                st.pop();  }
            else{
                return false; }
        }
    }
    return st.empty();     }
int main(){
    string str="()()(())";
    cout<<"balanced or not if balanced then 1 or 0 -> "<<isValid(str)<<endl;
return 0;    }