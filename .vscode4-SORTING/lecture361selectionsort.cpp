#include<bits/stdc++.h>   
using namespace std;
void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){   // this loop is for the no. of time to run the 2nd loop
    int min_index=i;
     for(int j=i+1; j<n; j++){
            if(v[min_index]>v[j]){  //value ko compare krenge by the use of minindex aur jo bhi minimum value milega
                min_index=j; // uske index ko mtlb j ko min_index me assign kr denge aur 2nd loop ke bahar akar 
            }   } if(min_index!=i){  // because kbhi ho skta hai ki minimum value first index pr hi present rhe
        swap(v[i],v[min_index]); }// aur phir swapping hoga taki value damage na ho aur isse starting from the array  
    }  // array me minimum value ke elements assign ho jayenge   
}  
int main(){
    int n; cin>>n; vector<int> v(n);
    cout<<"UNSORTED ARRAY IS ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    selectionsort(v);
    cout<<"SORTED ARRAY IS ";
    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }  return 0;   }