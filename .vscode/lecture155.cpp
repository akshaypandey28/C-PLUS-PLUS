#include<iostream>   
#include<vector>
#include<cmath>
using namespace std;
void squares(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        v[i]=pow(v[i],2);
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]);
        }       /* i used to run for loop for three times but there is
                     also method for same process without using three times for loop */
    }
}
int main(){
    int n;
    cout<<"number is "; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    squares(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}