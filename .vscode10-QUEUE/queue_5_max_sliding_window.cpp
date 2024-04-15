#include<bits/stdc++.h>
#include<deque> //leetcode 239 sliding window maximum
using namespace std;
vector<int> max_window(vector<int> &a,int k){
    deque<int> dq;    
    vector<int> res;
    //i am maintaining the maximum at deque front and after that elements are in decreasing order
    for(int i=0; i<k; i++){
        while(dq.empty()!=1 && a[dq.back()]<a[i]) dq.pop_back();  

        dq.push_back(i);
    }
    res.push_back( a[dq.front()] );
    for(int i=k; i<a.size(); i++){
        int curr=a[i];

        if(dq.front()==i-k)  dq.pop_front(); 

        while(dq.empty()!=1 && a[dq.back()]<a[i])  dq.pop_back();

        dq.push_back(i);

        res.push_back( a[dq.front()] ); 
    }
    return res;
}
int main(){
    int n; cin>>n;  vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];  
    int k; cin>>k;
    vector<int> result=max_window(a,k);
    for(int i=0; i<result.size(); i++) cout<<result[i]<<" ";      
    cout<<endl;  
    return 0;   
}