/* Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];    }
    bool flag=false;
    int x; cin>>x;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(abs(array[i]-array[j])==x){
                flag=true;
                break;
            }
        }
    }
    cout<<"THE ANSWER IS "<<flag<<endl;
return 0;
}