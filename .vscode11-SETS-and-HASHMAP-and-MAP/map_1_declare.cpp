#include<iostream>
#include<map>
//#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> directory;
    directory["naman"]=3876;
    directory["animesh"]=12345;
    directory["akshay"]=63065;
    for(auto ele:directory){
        cout<<"Name -> "<<ele.first<<", Phone ->  "<<ele.second<<endl;
    }
    map<string,int>:: iterator itr;
    for(itr=directory.begin();itr!=directory.end(); itr++){
        cout<<itr->first<<"  "<<itr->second<<endl;
    }
return 0;
}