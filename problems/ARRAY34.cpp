/* Q4 - ​Given an integer array arr, return the number of consecutive sequences(subarrays) with
odd sum. */  // something wrong in this code
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n]; 
    for(int i=0; i<n; i++){
        cin>>array[i];  }
        int k=-1; int odd[n]; int idx=-1;;
        for(int i=0; i<n; i++){
          if(array[i]%2==0 && array[i+1]%2==0){
            i++;   }
          else if(array[i]%2==1 && array[i+1]%2==1){
            k++;
            odd[k]=array[i]; idx=i;
             }
          else if(array[i]%2==1 && array[i+1]%2==0){
            k++;
            odd[k]=array[i];
          }
        }
        int sum=0; int index=-1; 
        int x=array[idx+1];
        for(int i=0; i<k; i++){
          if(odd[i]==x){
            index=i;
          }
        }
        for(int i=0; i<=index; i++){
          sum=sum+odd[i];
        }
        if(sum>0){
          cout<<"THE SUM IS "<<sum;   }
        else{
          cout<<" AS THERE IS NO ODD NUMBERS"<<endl;  }
return 0;
}--