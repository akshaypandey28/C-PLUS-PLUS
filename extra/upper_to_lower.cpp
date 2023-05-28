#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abcdEFGh";
    for(int i=0; i<str.size(); i++){
        int x=str[i];
        if(x>=65 && x<=90){

            str[i]=(char)x +32;
        }
    }
    cout<<str;
return 0;
}