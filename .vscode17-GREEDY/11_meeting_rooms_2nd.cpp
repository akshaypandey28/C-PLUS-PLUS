//leetcode 253 meeting_rooms_2nd
//it's a premium question
//Given an array of meeting time intervals intervals where intervals[i] = [starti, endi], 
//return the minimum number of conference rooms required.
#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a,vector<int> &b){
    return a[0]<b[0];
}
int minimum_room_for_the_meetings(vector<vector<int> > &v,int n){
    vector<int> a,b;
    for(int i=0; i<n; i++){
        a.push_back(v[i][0]);
        b.push_back(v[i][1]);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    int count=0;
    int ans=0;
    while(i<n and j<n){
        if(a[i]<b[j]){
            count++;
            ans=max(ans,count);
            i++;
        }
        else if(a[i]>b[j]){
            j++;
            count--;
        }
        else{
            i++; j++;
        }
    }
    return count;
}
/* int minimum_room_for_the_meetings(vector<vector<int> > &v,int n){
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<n; i++){
        cout<<v[i][0]<<"  "<<v[i][1]<<endl;
    }
    int count=1;
    int temp=v[0][1];
    for(int i=1; i<n; i++){
        if(v[i][0]>=v[i-1][0] and v[i][0] <v[i-1][1]) count++;
    }
    return count;
} */
int main(){
    int n; cin>>n;
    vector<vector<int> > v(n,vector<int> (2));
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++) { cin>>v[i][j]; }
        
    }
    for(int i=0; i<n; i++){
        cout<<v[i][0]<<"  "<<v[i][1]<<endl;
    }
    int result=minimum_room_for_the_meetings(v,n);
    cout<<"minimum rooms required for the meetings "<<result<<endl;

return 0;
}