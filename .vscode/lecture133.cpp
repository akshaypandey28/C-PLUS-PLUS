#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum=0;
    int difference=0;
    int array[]={1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        if((i)%2==0){
            sum=sum+array[i];  
        }
        else{
            difference=difference+array[i];
        }
    }
    cout<<sum-difference<<endl;
   
    return 0;
    
}