/* Q1 - Given a 2D matrix with m rows and n columns containing integers, find and print the
maximum value present in the array. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n; cin>>m>>n; int array[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>array[i][j];
        }
    }
    int max=array[0][0];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(array[i][j]>max){
                max=array[i][j];
            }
        }
    }
    cout<<"THE MAXIMUM VALUE IN THE 2D ARRRAY IS "<<max<<endl;
return 0;
}