#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int n=5;
    int k=3;
    int j=0;
    k=k%n;  //k can be greater than n
    //inserting last element in ans array
    int ansarray[5];
    for(int i=n-k; i<n; i++){
    ansarray[j++]=array[i];
    } //array[]={4,5, , , }
    for(int i=0; i<=k; i++){
        ansarray[j++]=array[i];
    }
    for(int i=0; i<n; i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}