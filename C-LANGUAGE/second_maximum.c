#include<stdio.h>
int main(){
    printf("Number of the elements in the array ");
    int n; scanf("%d",&n); // size of the array
    int arr[n]; // declaration of the array
    printf("Elements in the array are by taking input are ");
    int i=0;
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int f_m=arr[0]; //denotes the first maximum element of the array
    int f_m_idx=0; //denotes the first maximum element index of the array
    for(i=1; i<n; i++){
        if(arr[i]>f_m){
            f_m=arr[i];
            f_m_idx=i;
        }
    }
    arr[f_m_idx]=-1;
    int s_m=arr[0]; //denotes the second maximum element of the array
    for(i=1; i<n; i++){
        if(arr[i]>s_m){
            s_m=arr[i];
        }
    }
    printf("The second maximum element of the array is %d",s_m);
    
return 0;
}