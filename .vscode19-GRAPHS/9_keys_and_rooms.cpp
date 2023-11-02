#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        queue<int> qu;
        qu.push(0); //0th room is already unlocked
        visited.insert(0);
        while(qu.empty()!=1){
            int curr=qu.front();
            qu.pop();
            visited.insert(curr);
            for(auto neighbour: rooms[curr]){
                if(visited.count(neighbour)==0){
                    //neighbour not yet visited 
                    qu.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
        return visited.size()==rooms.size();
    }
};
int main(){

return 0;
}