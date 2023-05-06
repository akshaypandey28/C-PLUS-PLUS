//implement getMin for the stack to get min value of the stack 
#include<bits/stdc++.h> //leetcode 155 Min_Stack
#define ll long long int  //Time and Space both O(1)
using namespace std;
class MinStack{
    public :
    stack<ll> st;   ll mini;
    MinStack(){
        this->mini=INT_MAX; }
    void push(int val){
        if(this->st.empty()){
            this->mini=val;
            this->st.push(val);  }
        else{
            this->st.push(val-this->mini);
            if(this->mini > val){
                this->mini=val;   }
        }
    }
    void pop(){
        if(st.empty()!=1){  // stack empty na ho
            if(st.top()>=0){
                this->st.pop();  }
            else{ //<0
                this->mini=this->mini-st.top(); //old min= x-y i.e.
                this->st.pop();  }//and x is mini that is 
            }//present(current) minimum
    }
    int top(){
        if(this->st.size()==1){
            return this->top();   }
        else if(this->st.top() < 0){
            return this->mini; } // agr < 0 hai then currently stack ke top 
            //ko mini ko store kiya hai
        else{ //>=0
            return this->mini + this->st.top();   }
    }
    int getMin(){
        return this->mini;    }
};
int main(){
    MinStack ms;
    ms.push(10);
    ms.push(5);
    ms.push(6);
    ms.push(4);
    ms.push(13);
    int result =ms.getMin();
    cout<<"The minimum value of stack is "<<result<<endl;  
    return 0;    }