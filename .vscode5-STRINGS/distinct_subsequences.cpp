#include<bits/stdc++.h>
using namespace std;
int dist(string s)
    {
        unordered_map<char, int> last;
        int count = 1; //reresents empty string

        for (auto ch : s) {
            int newCount = 2 * count; // each subsequence can either include or exclude the current character

         if (last.find(ch) != last.end()) newCount -= last[ch];

            last[ch] = count; //it helps in removing the previous occurence of this character subsequences
            count = newCount;
        }
        return count;
}
int main(){
    string s; cin>>s;
    cout<<"answer is "<<dist(s)<<endl;
return 0;
}