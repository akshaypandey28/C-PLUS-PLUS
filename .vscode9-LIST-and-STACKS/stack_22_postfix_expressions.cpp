#include<bits/stdc++.h> //postfix_expressions
using namespace std;
int calculate(int v1,int v2,char op){
    if(op=='^'){
        return pow(v1,v2);    }
    if(op=='*'){
        return v1*v2;    }
    if(op=='/'){
        return v1/v2;   }
    if(op=='+'){
        return v1+v2;   }
    return v1-v2;
}
int evaluate(string &str){
    stack<int> st;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(isdigit(ch)){
            st.push(ch - '0');   }
        else{
            int v2=st.top();   st.pop();
            int v1=st.top();   st.pop();
            st.push(calculate(v1,v2,ch));    }
    }
    return st.top();  }
int main(){
    string str="231*+9-";
    cout<<"the answer is "<<evaluate(str)<<endl;   return 0;    }