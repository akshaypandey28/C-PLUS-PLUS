#include<bits/stdc++.h> //exactly same as second problem
using namespace std;
struct Meeting{  //here meeting has to be replaced by activity
    int start;   int end;
};
bool cmp(Meeting m1,Meeting m2){
    return m1.end< m2.end;   }
int print_max_meeting(vector<Meeting> &arr,int count){
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i].start<<"  "<<arr[i].end<<endl;
    }
    count=1;//first activity is always included that's why count is initially 1
    Meeting last=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i].start > last.end){
            count++;
            last=arr[i];
        }
    } 
    return count;  }
int main(){
    int n; cin>>n;  vector<Meeting> arr; int count=0;
    while(n--){
        int s,e;  cin>>s>>e;
        Meeting m;
        m.start=s; m.end=e;
        arr.push_back(m);   }
    int result =print_max_meeting(arr,count);
    // for(int i=0; i<4; i++){
    //     cout<<arr[i].start<<" "<<arr[i].end<<endl;   }
    cout<<"The maximum activity selection problem is "<<result<<endl;
return 0;  }