//find the minimum number of brackets that we need to remove to make the 
//given bracket sequence balaneced
#include<bits/stdc++.h>
using namespace std;
int balanced(string str){
    stack<char> st;
    int count=0;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(ch=='['  || ch=='{' || ch=='('){
            st.push(ch);   }
        else{ // that means a closing bracket
            if(ch==')' && st.empty()!=1 && st.top()=='('){
                st.pop();     }
            else if(ch==']' && st.empty()!=1 && st.top()=='['){
                st.pop();    }
            else if(ch=='}' && st.empty()!=1 && st.top()=='{'){ 
                st.pop();   }
            else{
                count++; }
        }
    }
    return count+st.size();     }
int main(){
    string str=")()(()";
cout<<"balanced or not if balanced then 1 or 0 -> "<<balanced(str)<<endl;
return 0;    }