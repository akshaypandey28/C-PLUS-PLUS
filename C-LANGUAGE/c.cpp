#include <iostream>
using namespace std;
int main() {  
    int n;  cin>>n;
    for(int i=1; i<=n ;i++){
    for(int j=1; j<=n-i;j++){
    cout<<" ";    } 
        int row=i-1;
        char ch='Z';
        for(int j=1; j<=i; j++){
            char cha=char(ch-row);
            cout<<cha;
            row=row-1;   }
        int col=1;
        char gh='Z';
        for(int j=1; j<=i-1; j++){
            if(j==i){
                continue;    }
            else{
                char gha=char(gh-col);
                cout<<gha;
                col=col+1;    }
        }
        cout<<endl;   } return 0;     }