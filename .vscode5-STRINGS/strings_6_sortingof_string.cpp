#include<bits/stdc++.h>
using namespace std;
string countsort(string str){
    vector<int> freq(26,0);
    //adding frequency of every character in string
    for(int i=0; i<str.length(); i++){
        int index=str[i]-'a';
        freq[index]++;  }
    //created our sorted string
    int j=0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            str[j]=i+'a';
            j++;
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<countsort(str)<<endl;
return 0;
}