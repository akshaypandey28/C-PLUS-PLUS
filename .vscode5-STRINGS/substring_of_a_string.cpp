#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){//function for checking the palindrome
    int i=0,j=s.size()-1;
    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
void printSubstrings(string str){ //function to finding all the substring of a string 
    // First loop for starting index
    string ans="";//for finding the longest palindromic substring
    for (int i = 0; i < str.length(); i++) {
        string subStr;
        // Second loop is generating sub-string
        for (int j = i; j < str.length(); j++) {
            subStr += str[j];
            cout << subStr << endl;
            if(palindrome(subStr)){
                if(subStr.size()>ans.size()) ans=subStr;
            }
        }
    }
    cout<<"The longest palindromic substring is "<<ans<<endl;
}
int main(){
    string str; cin>>str; //babad
    printSubstrings(str);
return 0;
}