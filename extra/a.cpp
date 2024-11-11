#include<bits/stdc++.h>
using namespace std;



struct Project {
    int remaining_employees;
    int index;
    
    bool operator<(const Project& other) const {
        return remaining_employees > other.remaining_employees;
    }
};

int getMaxBonus(vector<int> max_employees, vector<int> bonus, int m) {
    int n = max_employees.size();
    priority_queue<Project> pq;
    vector<int> current_employees(n, 1);
    
    for (int i = 0; i < n; ++i) {
        int remaining = max_employees[i] - 1;
        pq.push({remaining, i});
    }

    while (m-- && !pq.empty()) {
        Project top = pq.top();
        pq.pop();
        
        int idx = top.index;
        int remaining = top.remaining_employees;
        
        int assign = max(1, current_employees[idx] / 2);
        current_employees[idx] += assign;
        remaining -= assign;

        if (current_employees[idx] < max_employees[idx]) {
            pq.push({remaining, idx});
        }
    }
    
    int total_bonus = 0;
    for (int i = 0; i < n; ++i) {
        if (current_employees[i] >= max_employees[i]) {
            total_bonus += bonus[i];
        }
    }
    
    return total_bonus;
}
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int c; cin>>c;
    vector<int> b(c);
    for(int i=0; i<c; i++) cin>>b[i];
    int m; cin>>m;
    cout<<getMaxBonus(a,b,m)<<endl;
return 0;
}