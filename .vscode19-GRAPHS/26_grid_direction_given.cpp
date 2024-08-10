#include<bits/stdc++.h>
using namespace std;
/* Question
Given a grid n*m size.every cell of the grid are marked as L,R,U,D character on a cell denotes if you are standing
at that cell ,which direction can you move to.
space => O(1)

approach 1
there won't be any cycle if it is possible to reach destination
we will get cycle if we visit a cell twice 
worst case T.C n*m
total count of steps > n*m =>false 
destination reach and total count of steps <=n*m => true


approach 2  Floyd's Cycle Detection or Tortoise and Hare algorithm
slow fast pointer gives answer be checking cycle detection like linked list 
if fast is outside of grid => true
else false (when slow and fast is at same cell)

*/
bool isReachable(vector<vector<char>>& grid, int startX, int startY) {
    int n = grid.size();
    int m = grid[0].size();
    int steps = 0;
    int x = startX;
    int y = startY;
    
    while (true) {
        // If out of bounds, destination reached
        if (x < 0 || x >= n || y < 0 || y >= m)  return true;

        // Count the number of steps
        steps++;
        
        // If the number of steps exceeds n*m, a cycle is detected
        if (steps > n * m)  return false;

        // Move to the next cell based on the current direction
        char direction = grid[x][y];
        if (direction == 'L') y--;
        else if (direction == 'R') y++;
        else if (direction == 'U') x--;
        else if (direction == 'D') x++;
    }
}

bool isReachableCycleDetection(vector<vector<char>>& grid, int startX, int startY) {
    int n = grid.size();
    int m = grid[0].size();
    
    int slowX = startX, slowY = startY;
    int fastX = startX, fastY = startY;
    
    while (true) {
        // Move slow pointer by one step
        if (grid[slowX][slowY] == 'L') slowY--;
        else if (grid[slowX][slowY] == 'R') slowY++;
        else if (grid[slowX][slowY] == 'U') slowX--;
        else if (grid[slowX][slowY] == 'D') slowX++;
        
        // Move fast pointer by two steps
        for (int i = 0; i < 2; i++) {
            if (grid[fastX][fastY] == 'L') fastY--;
            else if (grid[fastX][fastY] == 'R') fastY++;
            else if (grid[fastX][fastY] == 'U') fastX--;
            else if (grid[fastX][fastY] == 'D') fastX++;
            
            // Check if fast pointer has moved out of bounds
            if (fastX < 0 || fastX >= n || fastY < 0 || fastY >= m)  return true;
        }
        
        // If slow and fast pointers meet, there's a cycle
        if (slowX == fastX && slowY == fastY) return false;
    }
}

int main(){
return 0;
}