#include<bits/stdc++.h>
using namespace std;
struct Meeting{
    int start;   int end;    int idx;
};
bool cmp(Meeting m1,Meeting m2){
    return m1.end< m2.end;   }
void print_max_meeting(vector<Meeting> &arr){
    
    sort(arr.begin(),arr.end(),cmp);
    cout<<arr[0].idx<<" ";//first meeting is always included that is print index
    Meeting last=arr[0];
    for(int i=1; i<arr.size(); i++){
        
        if(arr[i].start > last.end){
            cout<<arr[i].idx<<" ";
            last=arr[i];
        }
    }   }
int main(){
    int n; cin>>n;  vector<Meeting> arr;
    int i=0; //i is index of the vector
    while(n--){
        int s,e;  cin>>s>>e; i++; 
        Meeting m;
        m.start=s; m.end=e; m.idx=i;
        arr.push_back(m);
        }
    print_max_meeting(arr);
return 0;  }