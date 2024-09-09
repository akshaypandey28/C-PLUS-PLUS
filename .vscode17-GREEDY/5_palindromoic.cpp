#include <bits/stdc++.h>
using namespace std;
bool is_possible(unordered_map<int, int> &mp){
    int count = 0;
    for (int i = 0; i <= 9; i++){
        if (mp.count(i)){
            if (mp[i] % 2 != 0){
                count++;
                if (count > 1) return false;
            }
        }
    }
    return true;
}
string max_palindrome(string num){
    int l = num.size();
    unordered_map<int, int> mp;

    for (int i = 0; i < l; i++) mp[num[i] - '0']++; // this is used to convert char into digits

    if (!is_possible(mp)) return "NOT POSSIBLE";

    vector<char> v(l);
    int front = 0;
    for (int i = 9; i >= 0; i--){
        if (mp[i] % 2 != 0){
            v[l / 2] = char(i + 48); // l/2 denotes the middle position and 48 addition is character conversion
            mp[i]--;
        }
        while (mp[i] > 0){
            v[front] = char(i + 48);
            v[l - front - 1] = char(i + 48);
            mp[i] -= 2;
            front++;
        }
    }
    string result = "";

    for (int i = 0; i < v.size(); i++) result += v[i];

    return result;
}
int main(){
    string s;  cin >> s;
    cout << max_palindrome(s) << endl;
    return 0;
}
