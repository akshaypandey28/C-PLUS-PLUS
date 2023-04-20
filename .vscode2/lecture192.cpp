#include<iostream>
#include<vector>
using namespace std;
int leftmost0nesrow(vector<vector<int>> &v){
    int  leftmost0nes =-1;
    int  max0nesrow=-1;
    int j=v[0].size()-1;
    while(j>=0 && v[0][j]==1){
        leftmost0nes = j;
        max0nesrow = 0;
        j--;
    }
    //finding left most ones on 0th row
    /* for(int j=v[0].size()-1; j>=0; j--){
        if(v[0][j]==1){
            leftmost0nes = j;
            max0nesrow = 0; //i which  is column
        }
        else{
            break;
        }
    } */
    // check in rest of the rows if we can find a one left to the leftmost0ne
    for(int i=1; i<v.size(); i++){
            while(j>=0 && v[i][j]==1){
                leftmost0nes = j;  j--;
                max0nesrow = i;
            }
        }
        return max0nesrow;
    }

int main(){
    int n,m; cin>>n>>m;
    vector<vector<int >> vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }
    int result= leftmost0nesrow(vec);
    cout<<"row number is"<<result<<endl;
    return 0;
}