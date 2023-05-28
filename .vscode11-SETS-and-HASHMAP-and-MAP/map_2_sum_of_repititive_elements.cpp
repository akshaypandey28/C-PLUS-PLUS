#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[a[i]]++; // storing frequency of element
    }
    int sum=0;
    for(auto ele:m){
        if(ele.second>1){
            sum=sum+ele.first;
        }
    }
    cout<<"sum is "<<sum<<endl;
    // map<int,int>::iterator itr;
    // for(itr=m.begin();itr!=m.end(); itr++){
    //     cout<<itr->first<<"--"<<itr->second<<endl;
    // }

return 0;
}