#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> s;
    for(int i=0; i<3; i++){
        int x;  cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    cout<<(s[1]-s[0])+(s[2]-s[1])<<endl;

return 0;
}