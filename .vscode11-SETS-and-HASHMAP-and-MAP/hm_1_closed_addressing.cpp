#include<iostream>
#include<vector>
#include<list>
#include<bits/stdc++.h>
using namespace std;
class Hashing{
    vector<list<int >> hashtable;    int buckets;
    public :
    Hashing(int size){
        buckets=size;
        hashtable.resize(size);    }
    int hashValue(int key){
        return key % buckets; } //division method 

    void addKey(int key){
        int idx=hashValue(key);
        hashtable[idx].push_back(key);   }

    list<int>::iterator search(int key){ //return type is iterator
        int idx=hashValue(key);
        return find( hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deleteKey(int key){
        int idx=hashValue(key);
        if(search(key)!=hashtable[idx].end()){ // checking value(key) is present or not
            hashtable[idx].erase( search(key) ); //deleting using iterator
            cout<<key<<" is deleted"<<endl;    }
        else{
            cout<<"Key is not present inside the hashtable"<<endl;   }
    }
};
int main(){
    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(3);

    h.deleteKey(3);
    h.deleteKey(3);
return 0;
}