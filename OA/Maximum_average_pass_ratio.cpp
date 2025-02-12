#include<bits/stdc++.h>
using namespace std;
//find the class with max delta
//Approach-2 : (Chossing class with max delta/improvement everytime - Improving with max heap)
//T.C : O(extraStudents * log(n))
//S.C : O(n)
class Solution {
public:
    #define P pair<double, int>
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();

        priority_queue<P> pq; //max-heap  -  //{max-delta, idx}

        for(int i = 0; i < n; i++) { //initially for 1 student
            double current_PR = (double)classes[i][0]/classes[i][1];
            double new_PR = (double)(classes[i][0]+1)/(classes[i][1]+1);
            double delta = new_PR - current_PR;
            pq.push({delta, i});
        }
        //before every execution of while loop delta is calculated for the next one
        //O(extraStudents * log(n))
        while(extraStudents--) { //O(k)
            auto curr = pq.top(); //log(n)
            pq.pop();

            double delta = curr.first;
            int idx = curr.second;

            classes[idx][0]++; //incremeent total passing students in the class
            classes[idx][1]++; //increment total students oin the class
//till this line 1 student is assigned to any class and it's updated for 1 student
//after this next delta is calculated for the next student assigning process

            double current_PR = (double)classes[idx][0]/classes[idx][1]; //this is because only 1 value gets
            //changed not every value so heap gets updated for the 1 student and for this student
            //new_PR is calculated to push it into heap
            double new_PR = (double)(classes[idx][0]+1)/(classes[idx][1]+1);
            delta = new_PR - current_PR;
            pq.push({delta, idx}); //log(n)
        }

        double result = 0.0;
        for(int i = 0; i < n; i++)  result += (double)classes[i][0]/classes[i][1];

        return result/n;
    }
};

int main(){
return 0;
}