//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
    //     vector<int> v(n);
    //     for(int i=0; i<n; i++){
    //         v[i]=arr[i];
    //     }
    //    sort(v.begin(),v.end());
    //    for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";
    //    }
    //     cout<<endl;
    //     int maxi=v[n-1];
    //     cout<<maxi<<endl;
    //     vector<int>freq(maxi+1,0);
        
    //     for(int i=0; i<n; i++){
    //         freq[v[i]]++;
    //     }
    //     for(int i=0; i<freq.size(); i++){
    //         cout<<i<<" "<<freq[i]<<endl;
    //     }
    //     sort(freq.begin(),freq.end());
    //     int mini=0;
    //     // for(int i=0; i<freq.size(); i++){
    //     //     cout<<i<<" "<<freq[i]<<endl;
    //     // }
        
    //     // for(int i=0; i<freq.size(); i++){
    //     //     if(freq[i]!=0){
    //     //         a.push_back(i);
    //     //     }
    //     // }
        
    //     for(int i=0; i<freq.size(); i++ ){
    //         if(freq[i]!=0){
    //             mini=i;
    //             break;
    //         }
    //     }
    //     return mini;
        map<int,int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        map<int,int>:: reverse_iterator itr;

        int ele=0,i=INT32_MAX;;
        for(itr=m.rbegin(); itr!=m.rend(); itr++){
            cout<<itr->first<<"  "<<itr->second<<endl;
            if(itr->second<i){
                i=itr->second;
                ele=itr->first;
            }
        }
        return ele;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends