/* Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101. */
#include<bits/stdc++.h>
using namespace std;
void sorting(vector<int> &array,int n){
    int left_ptr=0; int right_ptr=n-1;
    vector<int> array1(n);
    while(left_ptr<=right_ptr){
        if(abs(array[left_ptr]) < abs(array[right_ptr])){
            array1.push_back(array[right_ptr]*array[right_ptr]);
            right_ptr--;
        }
        else{
            array1.push_back(array[left_ptr]*array[left_ptr]);
            left_ptr++;
        }
    }
    reverse(array1.begin(),array1.end());
    for(int i=0; i<n; i++){
        cout<<array1[i]<<" ";
    }cout<<endl;
}
int main(){
    int n; cin>>n; vector<int> array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];    }
    sorting(array,n);
return 0;
}