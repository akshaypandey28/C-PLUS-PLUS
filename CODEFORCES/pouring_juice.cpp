#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
bool cmp(pp a,pp b){
    return a.first>b.first;
}
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> initial(n);
        vector<pp> cp(n);
        vector<int> capacity(n);
        int sum=0;
        for (int i = 0; i < n; ++i) {
            cin >> initial[i];
            sum+=initial[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> capacity[i];
            cp[i]={capacity[i],i};
        }
        int container=0;
        int effort=0;
        int effort_min=INT_MAX;
        int effort_min_index=0;
        int count=0; //counting for checking any cp[i] is greater than or not than sum in else case
        sort(cp.begin(),cp.end(),cmp);
        //for(int i=0; i<n; i++) cout<<cp[i].first<<" "<<cp[i].second<<endl;
        //cout<<endl;
        for(int i=0; i<n; i++){
            if(sum>=cp[i].first){
                container++;
                sum-=cp[i].first;
                effort+=capacity[cp[i].second]-initial[cp[i].second];
                cout<<effort<<" ";
                if(sum==0) break;
            }
            else{ //sum < cp[i]
                count++;
                if(effort_min>cp[i].first){
                    effort_min=cp[i].first;
                    effort_min_index=cp[i].second;
                }
            }
        }
        if(count>0) container++;
        //if(effort_min!=INT_MAX) effort+=capacity[effort_min_index]-initial[effort_min_index];
        cout<<endl;
        cout<<container<<" "<<effort<<endl;
    }
return 0;
}