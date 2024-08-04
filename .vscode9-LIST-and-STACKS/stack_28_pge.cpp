#include<bits/stdc++.h>
using namespace std;
vector<int> pge(vector<int> &arr){
    int n=arr.size();
    vector<int> output(n,-1);
    stack<int> st; //storing indexes
    st.push(n-1); //index n-1
    for(int i=n-2; i>=0; i--){
        while(st.empty()!=1  && arr[i]> arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(st.empty()!=1){  // for assigning -1 to the elements for
        output[st.top()]=-1; // which there is no nge
        st.pop();
    }
    return output;    }
int main(){
    int n; cin>>n;   vector<int> v(n);
    for(int i=0; i<n;  i++){
        cin>>v[i];    }
    vector<int> res=pge(v);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";   }   return 0;   }