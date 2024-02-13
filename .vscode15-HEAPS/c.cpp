/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int num=6;
    float n=float(num);
    //n=(n*100000);
    n=n/100000;
    cout<<setprecision(5)<<n;
    //cout<<n;
return 0;
} */

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

class CustomComparator {
    bool operator()(const pair<int, string>& p1, const pair<int, string>& p2) const {
        // Compare based on the first integer value
        if (p1.first != p2.first) {
            return p1.first < p2.first;
        }
        // If the first integer values are equal, compare based on lexicographical order of the second string value
        return p1.second < p2.second;
    }
};

int main() {
    // Define a priority queue of pairs with the custom comparator
    priority_queue<pair<int, string>, vector<pair<int, string>>, CustomComparator> pq;

    // Example usage
    pq.push({2, "apple"});
    pq.push({1, "orange"});
    pq.push({3, "banana"});
    pq.push({2, "kiwi"});
    pq.push({1, "grape"});

    // Pop and print the elements from the priority queue
    while (!pq.empty()) {
        pair<int, string> topElement = pq.top();
        pq.pop();
        cout << "(" << topElement.first << ", " << topElement.second << ") ";
    }

    return 0;
}
