#include<bits/stdc++.h>
using namespace std;
void selectionsort(char fruit[][60],int n){
    for(int i=0; i<n-1; i++){
        int min_index=i;  //finding the min element index
        for(int j=i+1; j<n; j++){
            if(strcmp(fruit[min_index],fruit[j])>0){
                min_index=j;    }
        if(min_index!=i){
        swap(fruit[min_index],fruit[i]);   }
        }
    }
    return;     }
int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    selectionsort(fruit,n);
    for(int i=0; i<n; i++){
        cout<<fruit[i]<<" ";   }
return 0;   }