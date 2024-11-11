#include<bits/stdc++.h>
using namespace std;
long rearrangeStudents(vector<int>&a,vector<int>&b)
{
    int n = a.size();
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long ans = 0;
    map<int,int>mp;
    for(int &e:a)
    {
        mp[e]++;
    }
    for(int &e:b)
    {
        mp[e]++;
    }
    for(auto it:mp)
    {
        if(it.second&1) return -1;
    }
    for(int &e:a)
    {
        mp[e]--;
    }
    vector<int>v(n,0);
    for(int i=0; i<n; ++i)
    {
        mp[a[i]]--;
        if(mp[a[i]]<0)
        {
            v[i] = 1;
        }
    }
    map<int,int>curr;
    for(int i=0; i<n; ++i)
    {
        if(v[i]) curr[a[i]]++;
    }
    vector<int>v1,v2;
    for(auto it:mp)
    {
        if(it.second>0) v2.push_back(it.first);
    }
    for(auto it:curr)
    {
        v1.push_back(it.first);
    }
    sort(v1.begin(),v1.end());
    sort(v2.rbegin(),v2.rend());
    for(int i=0; i<v1.size(); ++i)
    {
        ans+=min(v1[i],v2[i]);
    }
    return ans;
}
int main()
{
    vector<int>a = {4,2,2,2};
    vector<int>b = {1,4,1,2};
    int res = rearrangeStudents(a,b);
    cout<<res<<endl;

return 0;
}