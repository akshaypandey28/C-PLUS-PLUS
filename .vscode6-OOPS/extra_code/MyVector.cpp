#include<iostream>
#include<vector>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }

    void push(int ele){
        if(size==capacity){
            capacity*=2;
            int* arr2=new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size]=ele;
        size++;
    }

    void print(){
        for(int i=0; i<size; i++) cout<<arr[i]<<" ";
        cout<<'\n';
    }

    int get(int idx){
        if(size==0) {
            cout<<"array is empty"<<'\n';
            return -1;
        }
        if(idx>=size || idx<0) {
            cout<<"invalid index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void remove(){
        if(size==0) {
            cout<<"array is empty"<<'\n';
            return ;
        }
        size--;
        return ;
    }
};
int main(){
    Vector v;
    v.push(10);
    v.print();
    cout<<"size and capacity of the array respectively : "<<v.size<<" : "<<v.capacity<<'\n';

    v.push(1);
    v.print();
    cout<<"size and capacity of the array respectively : "<<v.size<<" : "<<v.capacity<<'\n';

    v.push(19);
    v.print();
    cout<<"size and capacity of the array respectively : "<<v.size<<" : "<<v.capacity<<'\n';

    v.push(18);
    v.print();
    cout<<"size and capacity of the array respectively : "<<v.size<<" : "<<v.capacity<<'\n';

return 0;
}