#include <bits/stdc++.h>
using namespace std;
int partitionalgorithm(int *array,int first,int last){
	int pivot=array[last];
	int i=first-1; // i used for swapping the value 
	for(int j=0; j<last; j++){ // j is used for traversing and comparing the value with pivot
		if(array[j]<pivot){
			i++;
			swap(array[i],array[j]);
		}
	}
	swap(array[i+1],array[last]);
	return i+1;
}
int main(){
	int array[]={10,3,7,9,1,8};
	int n=sizeof(array)/sizeof(array[0]);
	int result=partitionalgorithm(array,0,n-1);
	cout<<"THE PIVOT ELEMENT IS "<<array[result]<<" "<<result<<endl;
	for(int ele:array){
		cout<<ele<<" ";
	}
}