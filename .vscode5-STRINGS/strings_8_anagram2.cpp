#include<bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2){
    vector<int> freq(26,0);
    if(s1.length()!=s2.length()){
        return false;    }
    //store frequency of characters in s1 and s2
    for(int i=0; i<s1.length(); i++){
        int index1=s1[i]-'a';//for s1 incrementing
        freq[index1]++;

        int index2=s2[i]-'a';//for s2 decrementing
        freq[index2]--;
    }
    //checking if freq of every character is 0
    for(int i=0; i<freq.size(); i++){
        if(freq[i]!=0){
            return false;
            break;   }
    }
    return true;    }
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(anagram(s1,s2)==1){
        cout<<"YES IT IS A ANAGRAM";
    }
    else{
        cout<<"IT IS NOT AN ANAGRAM";
    }    return 0;    }