#include<bits/stdc++.h>
using namespace std;
class Queue{
    int front;    int back;
    vector<int> v;
    public :
    Queue(){
        this->back=-1;
        this->front=-1;     }
    void EnQueue(int data){
        v.push_back(data);
        this->back++;
        if(this->back==0){
            this->front=0;     }
    }
    void deQueue(){
        if(this->front==this->back){ //front is always <=back
            this->front=-1;
            this->back=-1;
            this->v.clear();    }
        else{
            this->front++;   }
    }
    int getFront(){
            if(this->front==-1){
               return -1;      }
            return this->v[this->front];
    }
    bool isEmpty(){
        return this->front==-1;   }
};
int main(){
    Queue qu;
        qu.EnQueue(10); //1 2 3 4 
        qu.EnQueue(20);
        qu.EnQueue(30);
        qu.deQueue(); 
        qu.EnQueue(40);
        while(not qu.isEmpty()){ //qu.isEmpty()!=1
            cout<<qu.getFront()<<" ";
            qu.deQueue();
        } cout<<endl;
return 0;
}