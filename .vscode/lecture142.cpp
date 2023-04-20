#include<iostream>
#include<limits>
#include<float.h> 
using namespace std;
int largestelementIndex(int array[], int size){
    int max=INT32_MIN;
    int maxindex=-1;
    for(int i=0; i<size; i++){
        if (array[i]>max){
            max=array[i];  //max=7
            maxindex=i;   //maxindex=3
        }
    }
    return maxindex;   //3
}
int main(){
    int array[]={2,3,5,7,6,1};
    int indexoflargest = largestelementIndex(array,6);
    cout<<array[indexoflargest]<<endl;   //7
    cout<<" "<<endl;
    array[indexoflargest]=-1;
    int indexofsecondlargest = largestelementIndex(array,6);
    cout<<array[indexofsecondlargest]<<endl;  //6
    return 0;
}
