//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        //sort(hand.begin(),hand.end());
        vector<int> copy(hand.size());
        for(int i=0; i<hand.size(); i++){
            copy[i]=hand[i];
        }
        cout<<endl;
        sort(copy.begin(),copy.end());
        int maxi=copy[N-1];
        cout<<maxi<<endl;
        vector<int> a;
        vector<int>f(maxi+1,0);
        for(int i=0; i<N; i++){
            f[hand[i]]++;
        }
        
         for(int i=0; i<f.size(); i++){
            cout<<f[i]<<" ";
           
        }
        cout<<endl;
        
        for(int i=0; i<a.size(); i++){
            
            cout<<a[i]<<" ";
        }
        cout<<endl;
        // bool ans=false;
        // for(int i=0; i<a.size(); i++){
        //     int count=groupSize;
        //     while(count--){
        //         if(a[i+1]-a[i]==1){
        //             ans=true;
        //             i++;
        //         }
        //         else{
        //            ans=false;
        //            break;
        //         }
        //     }
        // }
        // return ans;
    }
};



int main() {
    //int t;
   // cin >> t;
   // while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    //}
    return 0;
}
// } Driver Code Ends