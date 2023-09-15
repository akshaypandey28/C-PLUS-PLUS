#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> a={4,5,6};
   int ans=a[0];
   for(int i=1; i<3; i++){
    ans=ans&a[i];
   }
   cout<<ans<<endl;
return 0;
}