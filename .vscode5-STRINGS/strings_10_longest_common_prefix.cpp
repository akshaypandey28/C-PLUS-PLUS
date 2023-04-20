#include<bits/stdc++.h>
using namespace std;
string longest_common_prefix(vector <string> &str){
    //sorting the array of strings
    sort(str.begin(),str.end());
    string s1=str[0];//first string
    int i=0;//first pointer 
    string s2=str[str.size()-1];//last string
    int j=0;//second pointer
    string ans="";
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans=ans+s1[i];
            i++; j++;    }
        else{    break;   }
    }    return ans;    }
int main(){
    int n; cout<<"enter no. of strings";  cin>>n;
    vector<string> str(n);
    for(int i=0; i<n; i++){
        cin>>str[i];    }
    cout<<"LONGEST COMMON PREFIX : "<<
    longest_common_prefix(str)<<endl;
return 0;   }