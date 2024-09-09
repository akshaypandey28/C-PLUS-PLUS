#include<bits/stdc++.h>
using namespace std;
int solution(vector<int> &visits,int target){
    int sum=0;
    for(int i=0; i<visits.size(); i++){
        sum+=visits[i];
        if(sum>=target) return i;
    }
    return -1;
}
int main(){
return 0;
}