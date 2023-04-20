#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int akshay[5];
    int sum=0;
    for(int i=0; i<5; i++){
        sum=sum+array[i];
        akshay[i]=sum;
    }
    for(int i=0; i<5; i++){
        cout<<akshay[i]<<" ";
    }
    return 0;
}