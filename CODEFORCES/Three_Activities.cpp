#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        // a[i] = friends for skiing on day i
        // b[i] = friends for movie on day i
        // c[i] = friends for board games on day i
        vector<vector<long long>> a(3, vector<long long>(n));

        // Reading skiing array
        for (int j = 0; j < n; j++) {
            cin >> a[0][j];
        }

        // Reading movie array
        for (int j = 0; j < n; j++) {
            cin >> a[1][j];
        }

        // Reading board games array
        for (int j = 0; j < n; j++) {
            cin >> a[2][j];
        }

        // top[0] -> best skiing days
        // top[1] -> best movie days
        // top[2] -> best board-game days
        //
        // Each pair stores:
        // {friends_count, day_index}
        vector<vector<pair<long long, int>>> top(3);

        for (int activity = 0; activity < 3; activity++) {

            vector<pair<long long, int>> v;

            for (int day = 0; day < n; day++) {

                // Store both value and day
                //
                // Example:
                // skiing friends = 100 on day 5
                //
                // store:
                // {100, 5}
                v.push_back({a[activity][day], day});
            }

            // Sort in decreasing order of friends count
            sort(v.rbegin(), v.rend());

            // Keep only top 3 days
            //
            // Why top 3?
            //
            // We need 3 distinct days.
            // At most 2 days can clash with our choice.
            // Therefore one of the top 3 choices
            // will always remain available.
            for (int k = 0; k < min(3, (int)v.size()); k++) {
                top[activity].push_back(v[k]);
            }
        }

        long long ans = 0;

        // Choose a skiing day
        for (int i = 0; i < top[0].size(); i++) {

            long long skiFriends = top[0][i].first;
            int skiDay = top[0][i].second;

            // Choose a movie day
            for (int j = 0; j < top[1].size(); j++) {

                long long movieFriends = top[1][j].first;
                int movieDay = top[1][j].second;

                // Skiing and movie can't be on same day
                if (skiDay == movieDay) {
                    continue;
                }

                // Choose a board-game day
                for (int k = 0; k < top[2].size(); k++) {

                    long long boardFriends = top[2][k].first;
                    int boardDay = top[2][k].second;

                    // All three activities must happen
                    // on different days
                    if (skiDay == boardDay ||
                        movieDay == boardDay) {
                        continue;
                    }

                    // Total friends for this choice
                    long long total =
                        skiFriends +
                        movieFriends +
                        boardFriends;

                    ans = max(ans, total);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}