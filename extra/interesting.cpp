#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> a, int n) {
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        int reach = 0;
        char ch = '\0';
        for (int j = 0; j < a[i].size(); j++) {
            if (reach == 0) {
                ch = a[i][j];
                reach++;
            } else if (ch != a[i][j]) {
                ch = a[i][j];
                reach = 1;
            } else reach++;

            if (reach == n) {
                bool leftBounded = (j - n >= 0 && a[i][j - n] != ch);
                bool rightBounded = (j + 1 < a[i].size() && a[i][j + 1] != ch);
                if ((j - n < 0 || leftBounded) && (j + 1 >= a[i].size() || rightBounded)) {
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    vector<string> w = {"abc", "abaaaccct", "abaaaa","aaaaba"};
    cout << solution(w, 3) << endl; // Output should be 3
    return 0;
}
