#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
  return a>b;
}
int main(){
  int n; cin>>n;
  // vector<vector<int> >v(n);
  // for(int i=0; i<n; i++){
  //   int m; cin>>m;
  //   v[i]=vector<int> (m);
  // }
  // for(int i=0; i<v.size(); i++){
  //   for(int j=0; j<v[i].size(); j++){
  //     cin>>v[i][j];
  //   }
  // }
  // for(int i=0; i<v.size(); i++){
  //   for(int j=0; j<v[i].size(); j++){
  //     cout<<v[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end(),cmp);
  for(auto ele:a){
    cout<<ele<<" ";
  }
  cout<<endl;
return 0;
}