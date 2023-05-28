#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
     for(int i=1;i<=t; i++){
         int n; cin>>n;
         int array[n];
         for(int j=0; j<n; j++){
             cin>>array[j];   }
        //calculating the differences between adjacent elelments make array arr
        int arr[n-1];
        for(int j=0 ;j<n-1; j++){
            arr[j]=abs(array[j]-array[j+1]);
        }
        int answer=INT_MAX;
        //if alice picks the first element 
        if(n>=2){
            answer=min(answer,arr[0]);
        }
        //if alice picks the last element
        if(n>=2){
            answer=min(answer,arr[n-2]);
        }
        //alice picks the element from middle
        for(int j=1; j<n-1; j++){
            int max_diff=max(arr[j-1] , arr[j]);
            answer=min(answer,max_diff);
        }
        cout<<answer<<endl;
      
             
         }
	return 0;
}
/*
3

3
1 1 1

4
1 2 3 4

5
-10 10 40 -50 30 
answer
0
1
20
*/
