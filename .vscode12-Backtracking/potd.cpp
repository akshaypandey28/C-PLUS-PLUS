//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
void per(vector<string> &a,string &s,int i){
    if(i==s.size()){
        a.push_back(s);
        return ;
    }
    for(int j=i; j<s.size(); j++){
        swap(s[i],s[j]);
        per(a,s,i+1);
        swap(s[i],s[j]);
    }
}
int fac(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}
    string kthPermutation(int n, int k)
    {
        // code here
    //     string s="";
    //     for(int i=1; i<=n; i++){
    //         s.push_back(i+'0');
    //     }
    //     int d=fac(n)/n;
    //     int e=(k/d);
        

    //    // cout<<s<<endl;
    //     vector<string> a;
    //     per(a,s,0);
    //     sort(a.begin(),a.end());
    //     return a[k-1];
    // code here
        int fact=1;
        vector<int> a;
        for(int i=1; i<n; i++){
            fact=fact*i;
            a.push_back(i);
        }
        a.push_back(n);
        string result="";
        k=k-1; // 0 based indexing 
        bool flag=true;
        while(flag){
           // result.push_back(a[k/fact]+'0');
          // result=result+to_string(a[k/fact]);
        result.push_back(a[k/fact]+'0');
            a.erase(a.begin()+k/fact);
            if(a.size()==0){
                break ;
            }
            k=k%fact;
            fact=fact/a.size();
        }
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends