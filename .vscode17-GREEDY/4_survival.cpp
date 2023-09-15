#include<bits/stdc++.h>
using namespace std;
double no_of_days(int s,int n,int m){
    int sun=s/7; //counting of number of days of sundays
    int food_buy=( s-(s/7) )*n;
    if(food_buy < s*m){ //n is maximum unit of food you can buy each day
        return 0;
    }
    else{
        //here i have to calculate the number of days
        //in smallest integer function
        double days=double(s*m)/n; //some food also gets wasted
        return ceil(days);
    }
}
int main(){
    int s,n,m; cin>>s>>n>>m;
    cout<<"The minimum number of days required for survival is "
    <<no_of_days(s,n,m)<<endl;
return 0;
}