#include<bits/stdc++.h>
using namespace std;
string longest_common_prefix(vector <string> &str){
    //keeping first length string as constant and comparing it with all other strings
    string s1=str[0];
    int ans_length=s1.size();
    for(int i=1; i<str.size(); i++){
        int j=0; 
        while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){//finding the common prefix string length
        j++;    }
        ans_length=min(ans_length,j);    }
    string ans=s1.substr(0,ans_length);
    return ans;    }
int main(){
    int n; cout<<"enter no. of strings";  cin>>n;
    vector<string> str(n);
    for(int i=0; i<n; i++){
        cin>>str[i];    }
    cout<<"LONGEST COMMON PREFIX : "<<longest_common_prefix(str)<<endl;
return 0;   }