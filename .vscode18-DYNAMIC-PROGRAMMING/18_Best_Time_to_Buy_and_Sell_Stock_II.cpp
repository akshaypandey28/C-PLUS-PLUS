#include<bits/stdc++.h>
using namespace std;
/* https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/ */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cProfit=0, tProfit=0;
        for(int i=1;i<prices.size();i++){
            cProfit=prices[i]-prices[i-1];
            if(cProfit>0){
                tProfit+=cProfit;
            }
        }
        return tProfit;
    }
};
int main(){
return 0;
}