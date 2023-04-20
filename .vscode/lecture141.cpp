#include<iostream>
#include<vector>
using namespace std;
int main(){
    int triplets=0;
    int array[]={3,1,2,4,0,6};
    int targetsum=5;
    for(int i=0; i<6; i++){ //i=0
        for(int j=i+1; j<6; j++){  //i=0 j=1 
            for(int k=j+1; k<6; k++){ //i=0 j=1 k=2,3,4,5,
            if(array[i]+array[j]+array[k]==targetsum){
                triplets+=1;
            }
        }
    }
    }
    cout<<triplets<<endl;
    return 0;
}