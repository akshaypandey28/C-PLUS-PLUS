#include<bits/stdc++.h>
using namespace std;
string anagram(string str1,string str2){
    vector<int> freq1(26,0);
    vector<int> freq2(26,0);
    for(int i=0; i<str1.length(); i++){
        int index=str1[i]-'a';
        freq1[index]++;
    }
    for(int i=0; i<str2.length(); i++){
        int index=str2[i]-'a';
        freq2[index]++;
    }
    bool flag=false;
    for(int i=0; i<26; i++){
        if(freq1[i]==freq2[i]){
            flag=true;
        }
        else{
            return "NOT A ANAGRAM";
            break;
        }
    }
    return "YES IT IS A ANAGRAM";
}
int main(){
    string str1="anagram";
    string str2="nagaram";
    cout<<anagram(str1,str2)<<endl;
return 0;
}