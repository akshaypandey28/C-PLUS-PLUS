#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        priority_queue<int, vector<int>, greater<int>> pq;
        int m=n;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            pq.push(abs(arr[j] - arr[i]));
        }

        int ans = 0;
        while(!pq.empty() and (m-2)>0){
            ans += pq.top();
            pq.pop();
            m--;
        }
        v[i] = ans;
    }

    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}
