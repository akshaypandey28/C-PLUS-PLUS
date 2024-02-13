#include<bits/stdc++.h>
using namespace std;
vector<int> pge(vector<int> &arr){
    int n=arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1); //this stores the element value not index
//thats why i use to pass the index value not element value

//here stack is used for storing elements in decreasing order
    stack<int> st; //storing indexes
    st.push(0); //index 0
    for(int i=1; i<n; i++){
        while(st.empty()!=1  && arr[i]> arr[st.top()]){
            output[st.top()]=n-i-1; //passing index not element value
//because after reverse the indexes will change
            st.pop();  }
        st.push(i);
    }
    while(st.empty()!=1){  // for assigning -1 to the elements for
        output[st.top()]=-1; // which there is no nge
        st.pop();   }
    reverse(output.begin(),output.end());
    reverse(arr.begin(),arr.end());
    return output;    }
int main(){
    int n; cin>>n;   vector<int> v(n);
    for(int i=0; i<n;  i++){
        cin>>v[i];    }
    vector<int> res=pge(v);
    for(int i=0; i<res.size(); i++){
        cout<<(i-res[i])<<" ";   }  return 0;   }