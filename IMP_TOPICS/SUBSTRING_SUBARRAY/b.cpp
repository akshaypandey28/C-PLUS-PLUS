#include <bits/stdc++.h>
using namespace std;

vector<int> findPatchSequence(string patch, string designerWords) {
    unordered_map<char, vector<int>> pos;
    for (int i = 0; i < patch.size(); i++) {
        pos[patch[i]].push_back(i);
    }

    vector<int> result;
    int patchCount = 0, wordIndex = 0;
    
    while (wordIndex < designerWords.size()) {
        int start = 0;
        vector<int> temp;
        
        while (wordIndex < designerWords.size()) {
            if (pos.find(designerWords[wordIndex]) == pos.end()) {
                return {-1};
            }
            
            auto &indices = pos[designerWords[wordIndex]];
            auto it = lower_bound(indices.begin(), indices.end(), start);
            
            if (it == indices.end()) break;
            
            temp.push_back(*it);
            start = (*it) + 1;
            wordIndex++;
        }
        
        if (temp.empty()) return {-1};
        
        result.insert(result.end(), temp.begin(), temp.end());
        patchCount++;
    }

    return result;
}

int main() {
    string patch, designerWords;
    cin >> patch >> designerWords;

    vector<int> result = findPatchSequence(patch, designerWords);

    if (result.size() == 1 && result[0] == -1) {
        cout << -1 << endl;
    } else {
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}