//multisource shortest path algorithm

//go via every vertex/node
//dist[3][2] means minimum distance between (3 to 2) vertex via k then answer will be calculated by formula 
//dist[3][2]=min(( dist[3][k] + dist[k][2] ) , dist[3][2])
//let k=4 then distance will be calculated via 4
//dist[3][2]=min(( dist[3][4] + dist[4][2] ) , dist[3][2])


//similar question leetcode 1334
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void shortestDistance(vector<vector<int>>&matrix) {
		int n = matrix.size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == -1) matrix[i][j] = 1e9;
				
				if (i == j) matrix[i][j] = 0;
			}
		}

		for (int k = 0; k < n; k++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matrix[i][j] = min(matrix[i][j],
					                   matrix[i][k] + matrix[k][j]);
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] == 1e9) {
					matrix[i][j] = -1;
				}
			}
		}

        /* 
        Check for negative weight cycles
        if same node to same node weight is < 0 then negative cycles detected
        for (int i = 0; i < V; i++) {
            if (matrix[i][i] < 0) {
                cout << "Graph contains a negative weight cycle." << endl;
                return;
            }
        }
         */
	}
};
int main(){
return 0;
}