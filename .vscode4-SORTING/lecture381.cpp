#include<bits/stdc++.h>
using namespace std;
void without_copy_of_array(int *array, int n){
    for(int i=n-1; i>=0; i--){
        bool flag =false;
        int j=0;
        while(j!=i){
            if(array[j]==0 && array[j+1]){
                flag =true;
                swap(array[j],array[j+1]);   }
            j++;      }
        if(!flag){  break;  }
    }    }
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];    }
    without_copy_of_array(array,n);
    cout<<"without_copy_of_array ";
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }   return 0;   }