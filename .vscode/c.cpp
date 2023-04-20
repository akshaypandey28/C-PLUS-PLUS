#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;    //size is not decided
    for(int i=1; i<5; i++){
       int element;
        cin>>element;
        v.push_back(element);
    }
     for(int i=0; i<v.size(); i++){     //for loop
        cout<<v[i]<<" ";
    }
       cout<<endl;  //size is decided of size=5
       return 0;
}