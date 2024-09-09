#include<bits/stdc++.h>
using namespace std;

int main() {
    int TC;
    cin >> TC;
    while (TC--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if(i && v.back() > x)
                v.push_back(1);
            v.push_back(x);
        }
        cout << v.size() << endl;
        for(auto x : v)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
