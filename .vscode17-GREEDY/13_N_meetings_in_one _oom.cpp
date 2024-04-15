#include<bits/stdc++.h>
using namespace std;
#define pp pair<int,int>
class Solution
{
    public:
    static bool cmp(pp a,pp b){
        return a.second < b.second;
    }
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pp> v;
        for(int i=0; i<n; i++){
            v.push_back({start[i],end[i]});
        }
        sort(v.begin(),v.end(),cmp);
        pp temp=v[0];
        int count=1;
        for(int i=1; i<n; i++){
            if(v[i].first > temp.second){
                count++;
                temp=v[i];
            }
        }
        return count;
    }
};
int main(){
return 0;
}