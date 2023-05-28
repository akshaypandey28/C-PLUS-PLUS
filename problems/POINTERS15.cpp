/* Q5 - Write a function that returns the first character, last character and the number of
occurrences of ‘t’ in a string input by user. */
#include<bits/stdc++.h>
using namespace std;
void fun(string a,int *count,char *first,char *last){
    *first=a[0];
    *last=a[a.size()-1];
    for(int i=0; i<a.size(); i++){
        if(a[i]=='t'){
            *count=*count+1;
        }
    }
}
int main(){
    string a; cin>>a;
    char first,last;
    int count=0;
    fun(a,&count,&first,&last);
    cout<<count<<" "<<first<<" "<<last<<endl;
return 0;
}