// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t; cin>>t;
// 	while(t--){
// 	    int n; cin>>n;
// 	    vector<int> a(n),b(n);
// 	    for(int i=0; i<n; i++){
// 	        cin>>a[i];
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        cin>>b[i];
// 	    }
//         vector<int> c(n);
//         for(int i=0; i<n; i++){
//             c[i]=a[i];
//         }
// 	    sort(c.begin(),c.end());
	    
// 	    vector<int> copy(n);
// 	    // for(int i=0; i<n; i++){
//         //     cout<<c[i]<<" ";
//         // }
//         // cout<<endl;
	   
// 	    for(int i=0; i<n; i++){
// 	        for(int j=0; j<n; j++){
// 	            if(c[i]==a[j]){
// 	                copy[i]=b[j];
// 	            }
// 	        }
// 	    }
//         // for(int i=0; i<n; i++){
//         //     cout<<copy[i]<<" ";
//         // }
//         // cout<<endl;
	    
// 	    int count=0;
// 	    for(int i=0; i<n; i++){

// 	        int diff=copy[i]-c[i];
//             int j=i+1;
//             while(c[j]<=diff){
//                 count++;
//                 j++;
//                 if(c[j]>diff){
//                     count++;
//                 }
//             }
//             i=j-1;

// 	    }
//         if(count==0){
//             cout<<count+1<<endl;
//         }
//         else{
//             cout<<count<<endl;
//         }
        
//         // cout<<endl;
//         // cout<<endl;
//         // cout<<endl;
	    
// 	}
// 	return 0;
// }
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> a(n),b(n);
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	    }
        vector<int> c(n);
        for(int i=0; i<n; i++){
            c[i]=a[i];
        }
	    sort(c.begin(),c.end());
	    
	    vector<int> copy(n);
	   
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            if(c[i]==a[j]){
	                copy[i]=b[j];
	            }
	        }
	    }
	    
	    int count=0;
	    for(int i=0; i<n; i++){

	        int diff=copy[i]-c[i];
            int j=i+1;
            while(c[j]<=diff){
                count++;
                j++;
                if(c[j]>diff){
                    count++;
                }
            }
            i=j-1;
	    }
        if(count==0){
            cout<<count+1<<endl;
        }
        else{
            cout<<count<<endl;
        }
        
	    
	}
	return 0;
}
