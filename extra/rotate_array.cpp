// #include<bits/stdc++.h> // 1 2 3 4 5 6 7
// using namespace std; // 3 4 5 6 7 1 2
// int main(){
//     int n; cin>>n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){  /* 
// 7
// 11 12 13 14 15 16 17
// 2
// */
//         cin>>v[i];
//     }
//     int k; cin>>k;
//     k=k%n;
//     int temp=k;
//     /* int left=0,right=k-1;
//     vector<int> a;
//     for(int i=0; i<k; i++){  
//         a.push_back(v[i]);
//     }
//     int i=0;
//     for(; i<n-k; i++){
//         v[i]=v[i+k];
//     }
//     int j=0;
//     for(; i<n; i++){
//         v[i]=a[j];
//         j++;
//     } */
//     if(k<=(n/2)-1){
//     int j=n-1;
//     int count=(n- ((k+1)*2));
//     while(k>=0){
//         swap(v[j],v[k]);
//         j--;
//         k--;
//     }
//     for(auto ele: v){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     int x=temp+count; cout<<"x is "<<x<<" count is"<<count<<endl;
//     while(count>0){
//         for(int i=x; i>0; i--){
//             swap(v[i],v[i-1]);
//         }
//         count--;
//     }
//     for(auto ele: v){
//         cout<<ele<<" ";
//     }
//     cout<<endl;}
//     else{
//         int j=n-1;
//     int count=(n- ((k+1)*2));
//     while(k>=0){
//         swap(v[j],v[k]);
//         j--;
//         k--;
//     }
//     for(auto ele: v){
//         cout<<ele<<" ";
//     }
//     cout<<endl;
    
//     }
// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    k=k%n;
    //int temp=k;
    int left=0,right=n-1-k;
    vector<int> a;
    
    while(left<=right){
        swap(v[left],v[right]);
        left++;
        right--;
    }
    int left1=n-k,right1=n-1;
    while(left1<=right1){
        swap(v[left1],v[right1]);
        left1++;
        right1--;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return 0;
} 
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    k=k%n;
    //int temp=k;
    int left=0,right=n-2-k;
    vector<int> a;
    while(left<=right){
        swap(v[left],v[right]);
        left++;
        right--;
    }
    int left1=n-k-1,right1=n-1;
    while(left1<=right1){
        swap(v[left1],v[right1]);
        left1++;
        right1--;
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
return 0;
}  */