//leetcode 1046 EASY
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int lastStoneWeight(vector<int>& stones){
        priority_queue<int> pq(stones.begin(),stones.end());
        while(pq.size()>1){
            int y=pq.top(); //1st max
            pq.pop();
            int x=pq.top(); //2nd max
            pq.pop();
            int sub=abs(y-x);
            if(sub!=0) pq.push(sub);
        }
        if(pq.size()==0) return 0;
        return pq.top();
    }
};
int main(){
    Solution S;
    int n; cin>>n;
    vector<int> stones(n);
    for(int i=0; i<n; i++){
        cin>>stones[i];
    }
    int answer=S.lastStoneWeight(stones);
    cout<<"The answer after collision is "<<answer<<endl;
return 0;
}