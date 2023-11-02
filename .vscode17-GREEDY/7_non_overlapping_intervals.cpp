#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   static bool cmp(vector<int> a,vector<int> b){ //here a and b is a array
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        vector<int> lastPicked=intervals[0]; //this is also a array
        int count=0;
        for(int i=1; i<intervals.size(); i++){
            if(lastPicked[1] > intervals[i][0]){
                count++; //overlap detected 
            }
            else{
                lastPicked=intervals[i]; //no overlap ,pick the current one and update the
                // value of lastPicked
            }
        }
        return count;
    }
};
int main(){
return 0;
}
