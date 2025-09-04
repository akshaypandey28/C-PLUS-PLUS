#include<bits/stdc++.h> //infix expressions
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
int precedence(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1; }
}
int eval(string &str){
    stack<int> num;
    stack<char> ops;
    for(int i=0; i<str.size(); i++){
        if(isdigit(str[i])) num.push(str[i]-'0');  

        else if(str[i]=='(') ops.push(str[i]);  

        else if(str[i]==')'){
            while(ops.empty()!=1  && ops.top()!='('){
                char op=ops.top();
                ops.pop();
                int v2=num.top();   num.pop();
                int v1=num.top();   num.pop();
                num.push(calculate(v1,v2,op));  
            }

            if(ops.empty()!=1 ) ops.pop();  
        }

        else{
            while(ops.empty()!=1 && precedence(ops.top()) >=precedence(str[i])){
                char op=ops.top();
                ops.pop();
                int v2=num.top();   num.pop();
                int v1=num.top();   num.pop();
                num.push(calculate(v1,v2,op));   
            }

            ops.push(str[i]);
        }
    }
    while(ops.empty()!=1){
        char op=ops.top();
        ops.pop();
        int v2=num.top();   num.pop();
        int v1=num.top();   num.pop();
        num.push(calculate(v1,v2,op));
    }
    return num.top();
}
int main(){
    string str="1+(2*(3-1))+2"; //answer is 7
    cout<<eval(str)<<endl;
return 0;
}