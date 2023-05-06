#include<bits/stdc++.h>
using namespace std;
int histogram(vector<int> &arr){
    int n=arr.size();
    stack<int> st; //storing indexes
    st.push(0); //index 0
    int ans=INT16_MIN;
    for(int i=1; i<n; i++){
        while(st.empty()!=1  && arr[i]< arr[st.top()]){ //nse
            int ele=arr[st.top()]; //current bar to be removed whose answer will
            int nsi=i;  //be calculated
            st.pop();
            int psi=(st.empty())? -1 : st.top();
            ans=max(ans,ele*(nsi-psi-1));
        }
        st.push(i);
    }
    while(st.empty()!=1){  //stack me kuch element bache honge
        int ele=arr[st.top()];
        int nsi=n;
        st.pop();
        int psi=(st.empty())? -1 : st.top();
        ans=max(ans,ele*(nsi-psi-1));    }
    return ans;    }
int main(){
    int n; cin>>n;   vector<int> v(n);
    for(int i=0; i<n;  i++){
        cin>>v[i];    }
    int res=histogram(v);
    cout<<res<<endl;  return 0;   }