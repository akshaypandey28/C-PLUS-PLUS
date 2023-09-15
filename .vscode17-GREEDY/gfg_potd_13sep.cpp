#include<bits/stdc++.h>
using namespace std;
string findLargest(int n, int s){
        // code here
        if(9*n <s ) return "-1";
        if(n==1) return to_string(s);
        string a="";
        int count=0;
        for(int i=1; i<=n; i++){
            if(s>9){
              a.push_back('9');
              s-=9;
            }
            else{
                break; 
            }
            count++;
            cout<<count<<endl;
        }
        cout<<count<<endl;
        if(count<n){
            string b=to_string(s);
            a.push_back(b[0]);
        }
        
        return a;
    }
int main(){
    cout<<findLargest(2,9);
return 0;
}