#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> list(n);
    for (int i = 0; i < n; i++) {
        cin>>list[i];
    }
    int no = 0;
    sort(list.begin(), list.end());
    
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += list[j];
        }
        if ((sum / (n - i)) >= m) {
            no = n - i;
            break;
        }
    }
    cout << no << endl;
    return 0;
}