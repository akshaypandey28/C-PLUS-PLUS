#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], count = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n; i++){
            if (a[i] == a[n - 1])  count++;
        }
            
        if (a[0] == a[n - 1]) cout << -1 << endl;
        else
        {
            cout << n - count << " " << count << endl;
            for (int i = 0; i < n - count; i++) cout << a[i] << " ";
            cout << endl;
            for (int i = 0; i < count; i++) cout << a[n - 1] << " ";
            cout << endl;
        }
    }
}