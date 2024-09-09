#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/implement-queue-using-stacks/ */
//using 2 queue
class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(s1.empty()!=1){
            s2.push(s1.top());
            s1.pop();
        }
        int que_front=s2.top();
        s2.pop();
        while(s2.empty()!=1){
            s1.push(s2.top());
            s2.pop();
        }
        return que_front;
    }
    
    int peek() {
        while(s1.empty()!=1){
            s2.push(s1.top());
            s1.pop();
        }
        int que_front=s2.top();
        while(s2.empty()!=1){
            s1.push(s2.top());
            s2.pop();
        }
        return que_front;
    }
    
    bool empty() {
        return s1.empty();
    }
};

//implement stack using single queue 
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int size=q.size();
        while(size!=1){
            q.push(q.front());
            q.pop();
            size--;
        }
        int stack_top=q.front();
        q.pop();
        return stack_top;
    }
    
    int top() {
        int size=q.size();
        while(size!=1){
            q.push(q.front());
            q.pop();
            size--;
        }
        int stack_top=q.front();
        q.pop();
        q.push(stack_top);
        return stack_top;
    }
    
    bool empty() {
        return q.empty()==1;
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main(){
return 0;
}