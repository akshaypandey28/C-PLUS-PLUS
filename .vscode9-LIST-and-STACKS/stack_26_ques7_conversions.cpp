//conversion of a postfix expressions to a prefix expression
#include<bits/stdc++.h>
using namespace std;
bool isOperator(char x){
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
        return false;   }
    return true;   }
string convert(string post){
    stack<string> st;
    for(int i=0; i<post.size(); i++){
        char ch=post[i];
        if (isOperator(ch) ) {
            string str="";
            str+=ch;
            st.push(str);  }
        else{
            string op2 =st.top();
            st.pop();
            string op1 =st.top();
            st.pop();
            string res =post[i]+op1+op2;
            st.push(res);  }
    }
    return st.top();    }
int main(){
    string post="ab+cd-*";
    cout<<convert(post)<<endl;
    cout<<convert("ABC/-AK/L-*")<<endl;
return 0;
}