#include<bits/stdc++.h>
using namespace std;
void smallestNumber(int d,int s){
    vector<char> v(d,'0');
    if(9*d < s){
        cout<<"number cannot be formed"<<endl;
        return ;
    }
    s--;
    int i;
    for(i=d-1; i>=0; i--){
        if(s < 9){
            break;
        }
        v[i]='9';
        s-=9;
    }
        v[0]='1';
        v[i]=char(s + '0');
    for(int j=0; j<v.size(); j++){
        cout<<v[j];  }
}
int main(){
    int d,s; cin>>d>>s;
    smallestNumber(d,s);
return 0;  }