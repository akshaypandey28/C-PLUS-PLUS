#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string str; cin>>str;
        // int idx=-1;
		// for(int i=0; i<str.size(); i++){
        //     if(str[i]=='1'){
        //         idx=i;
        //         break;
        //     }
		// }
        // if(idx==-1){
        //     cout<<"NO\n";
        // }else{
        //     bool check=0;
        //     string ans="Yes";
        //     for(int i=idx;i<str.size();i++){
        //         if(str[i]=='0'){
        //             check=1;
        //         }else{
        //             if(check==1){
        //                 ans="No";;
        //                 break;
        //             }
        //         }
        //     }
        //     cout<<ans<<"\n";
        // }
         vector<int> a;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='1'){
            a.push_back(i);
        }
    }
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    string b="YES";
    if(a.size()==0){
        cout<<"NO"<<endl;
    }
    else{
    for(int i=0; i<a.size()-1; i++){
        if(a[i+1]-a[i]!=1){
            b="NO";
            break;
        }
        else{
            continue;
        }
    }
    cout<<b<<endl;
    }
	}
return 0;
}