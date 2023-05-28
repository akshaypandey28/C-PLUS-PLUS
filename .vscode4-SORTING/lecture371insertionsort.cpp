#include<bits/stdc++.h>
using namespace std;
void insertionsort(vector<int> &v,int n){
    for(int i=1; i<n; i++){
        int current =v[i];  // current me phle hi element ko store kra diya taki v[i] ka value damage na ho
        int j=i-1; // j ka use krke array ko piche tarversed kiya ja rha hai
        while(j>=0 && v[j]>current){
            v[j+1]=v[j];  // jaise hi v[j] bada ho rha hai current se j+1 position pr v[j] store kra diya ja rha hai 
            j--; // 
        }
        v[j+1]=current; //while loop finish hote hi j ke next position pr current ka value diya ja rha hai
    }
}
int main(){
    int n; cin>>n; vector<int> v(n); cout<<"THE UNSORTED ARRAY IS ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    insertionsort(v,n);
    cout<<"THE INSERTION SORTED ARRAY IS ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
return 0;
}