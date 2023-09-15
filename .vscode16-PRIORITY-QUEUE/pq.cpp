#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq; //max heap
    pq.push(1);
    pq.push(10);
    pq.push(3);
    pq.push(4);
    cout<<pq.size()<<endl;
    priority_queue<int, vector<int> ,greater<int> > pq1; //min heap
    
return 0;
}