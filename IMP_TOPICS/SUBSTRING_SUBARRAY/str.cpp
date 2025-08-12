#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cin.ignore();  
    
    vector<string> app(n), spam(k);
    unordered_set<string> check;

    for (int i = 0; i < n; i++) getline(cin, app[i]);  
    for (int i = 0; i < k; i++) {
        getline(cin, spam[i]); 
        transform(spam[i].begin(), spam[i].end(), spam[i].begin(), ::tolower);
        check.insert(spam[i]);
    }

    vector<string> ans;
    for (int i = 0; i < n; i++) {
        istringstream akshay(app[i]);
        string word;
        int count = 0;
        
        while (akshay >> word) {
            //cout<<word<<endl;
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if (check.find(word) != check.end()) count++;
        }
        
        ans.push_back(count >= 2 ? "spam" : "not_spam");
    }
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
    return 0;
}
