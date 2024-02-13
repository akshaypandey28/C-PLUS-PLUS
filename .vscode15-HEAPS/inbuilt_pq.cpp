#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={9,6,1,19,3,2,8,12,5};
    int arr[]={9,6,1,19,3,2,8,12,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> max_pq; //max heap
    priority_queue<int, vector<int>, greater<int> > min_hp; //min heap


    priority_queue<int> max_hp_array(arr,arr+n); //maxheap
    priority_queue<int, vector<int>, greater<int> > min_hp_vector(v.begin(),v.end()); //min heap


    cout<<max_hp_array.top()<<endl;
    
    cout<<min_hp_vector.top()<<endl;


return 0;
}