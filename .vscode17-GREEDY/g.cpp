#include <bits/stdc++.h>
using namespace std;

vector<int> li, ri, mi;

static bool cmp(const pair<pair<int, int>, int>& a, const pair<pair<int, int>, int>& b) { 
    if (a.first.second != b.first.first) {
        return a.first.second > b.first.second; 
    }
    return a.first.first<b.first.first;
}
/* 
4
2 4 4
3 6 6
5 7 3
6 8 2
 */
int f(int n, const vector<int>& li, const vector<int>& ri, const vector<int>& mi) {
    vector<pair<pair<int, int>, int>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({{li[i], ri[i]}, mi[i]});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<n; i++) cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    int ans = v[0].second;
    int prev = v[0].first.second;

    for (int i = 1; i < n; i++) {
        if (v[i].first.first > prev) {
            ans = v[i].second;
            prev = v[i].first.second;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n), r(n), m(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i] >> m[i];
    }
    li = l;
    ri = r;
    mi = m;
    
    cout << f(n, li, ri, mi) << endl;

    return 0;
}
