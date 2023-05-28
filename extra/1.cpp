#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n][n];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
                cin>>array[i][j];
            }
	    }
        
    int max=INT32_MIN;
    int m=0; int row;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i][j]==1){
                m=m+1;  }
        if(m>max){
            max=m; row=i;  }
        }
    } 
    cout<<row<<endl;
    
return 0;
}