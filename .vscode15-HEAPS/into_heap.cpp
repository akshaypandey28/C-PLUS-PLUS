#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    priority_queue<int> pq;
    vector<float> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> a;
    for(int i=0; i<n-2; i++){
        for(int j=i; j<i+3; j++){
            pq.push(v[j]);
        }
        pq.pop();
        float temp=(float)pq.top();
        temp=temp*100000;
        temp=temp/100000;
        cout<<temp<<endl;
        a.push_back(temp);
        pq.pop();
        pq.pop();
    }
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
return 0;
}