#include<iostream>   
#include<vector>
#include<cmath>
using namespace std;
void akshay(vector<int> &v){
    int left_ptr=0; int right_ptr=v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++; right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }
}
int main(){
    vector<int> v;
    for(int i=0; i<5; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    akshay(v);
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}