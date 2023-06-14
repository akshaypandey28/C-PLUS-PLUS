#include<bits/stdc++.h>
using namespace std;
int noOfDigits(int n){
    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    return digits;
}
int power_caculate(int digits){
    int power=1;
    for(int i=1; i<digits; i++){
        power*=10;
    }
    return power;
}
int main(){
	int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int digits=noOfDigits(n);
       // cout<<digits<<endl;
       int power=power_caculate(digits);
       vector<int> a;
       if(n%power==0){
        cout<<1<<endl;
        cout<<n<<endl;
       }
       else{
        int count=0;
        while(n%power!=0){
            int num=(n/power)*power;
           // cout<<num<<" ";
           a.push_back(num);
            n=n%power;
           // cout<<"n = "<<n<<endl;
            int digits=noOfDigits(n);
            //cout<<"digits is "<<digits<<endl;
            power=power_caculate(digits);
           // cout<<"power is "<<power<<endl;
           count++;
        }
       // cout<<n<<endl;
        a.push_back(n);
        cout<<count+1<<endl;
        for(int i=0; i<a.size(); i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        //break;
       }
    }
return 0;
}