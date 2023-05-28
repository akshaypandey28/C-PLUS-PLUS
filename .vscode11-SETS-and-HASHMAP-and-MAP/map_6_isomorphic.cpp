#include<bits/stdc++.h> //isomorphic
#include<unordered_map>
using namespace std;
bool checkNoOneToManyMapping(string a,string b){
    unordered_map<char,char> iso;
    for(int i=0; i<a.length(); i++){
        if(  iso.find(a[i])!=iso.end()  ) {
            if(iso[a[i]]!=b[i]){
                return false;  }
        }
        else{
            iso[a[i]]=b[i];   }
    }
    return true;   }
bool isomorphic(string &a, string &b){
    if(a.length()!=b.length()){
        return false;    }
    //checking one to many mapping from b->a
    bool a_to_b=checkNoOneToManyMapping(a,b);
    //checking one to many mapping from a->b
    bool b_to_a=checkNoOneToManyMapping(b,a);

    return (a_to_b && b_to_a);   }
int main(){
    string a,b; cin>>a>>b;
    bool result=isomorphic(a,b);
    if(result){
        cout<<"yes it is isomorphic"<<endl;   }
    else{
        cout<<"it not an isomorphic"<<endl;  }   return 0;    }