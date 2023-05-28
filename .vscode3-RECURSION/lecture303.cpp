//checking of palindrome
#include<bits/stdc++.h>
using namespace std;
bool f(int num, int *temp){
    if(num>=0 && num<=9){
        int lastdigitoftemp = (*temp)%10;
       *temp= (*temp)/=10;
        return (num == lastdigitoftemp); }
        bool ans = (f(num/10,temp) && (num%10)==((*temp)%10));
        *temp= (*temp)/=10;
        return ans;
}
int main(){
    int num=12621;
    int temporary =num;
    int *temp=&temporary;
    cout<<f(num,temp);
return 0;
}