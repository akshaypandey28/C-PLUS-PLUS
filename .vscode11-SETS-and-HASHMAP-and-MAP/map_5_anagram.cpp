#include<bits/stdc++.h>
using namespace std;
bool anagram(string &a,string &b){
    if(a.size()!=b.size()){
        return false;
    }
    map<char ,int> check;
    for(int i=0; i<a.size(); i++){
        check[a[i]]++;
        check[b[i]]--;
    }
    for(auto ele:check){
        //cout<<ele.first<<" "<<ele.second<<endl;
        if(ele.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string a,b; cin>>a>>b;
    bool result=anagram(a,b);
    if(result==1){
        cout<<"yes it is anagram"<<endl;
    }
    else{
        cout<<"no it is not an anagram"<<endl;
    }
return 0;
}