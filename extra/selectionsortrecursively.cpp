#include<bits/stdc++.h>
using namespace std;
int minIndex(int *array,int n, int idx){
    int min_index;
    for(int i=idx; i<n-1; i++){
        if(array[i]>array[i+1]){
            min_index=i+1;
        }
    }
    return min_index;
}
void selectionsortrecursively(int *array,int n,int start){
    if(start==n){
        return;
    }
    int min_index;
    min_index=minIndex(array,n,start);
    swap(array[min_index],array[start]);
    
    selectionsortrecursively(array,n,start+1);
}
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    selectionsortrecursively(array,n,0);
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
return 0;
}