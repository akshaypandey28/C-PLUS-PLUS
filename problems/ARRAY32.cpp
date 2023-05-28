/* Q2 - ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
man starts his trek on point 0 with altitude equal 0. You are given an integer array height
of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
(0 <= i < n). Return the highest altitude of a point. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=1; i<n; i++){
        array[i]=array[i]+array[i-1];
    }
    int maximum=array[0];
    for(int i=1; i<n; i++){
        if(array[i]>maximum){
            maximum=array[i];
        }
    }
    cout<<"THE HIGHEST ALTITUDE OF A POINT "<<maximum<<endl;
return 0;
}