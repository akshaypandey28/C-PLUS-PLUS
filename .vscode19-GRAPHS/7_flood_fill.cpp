#include<bits/stdc++.h> //leetcode 733 flood fill
using namespace std;
class Solution {
public:
    //the function will do dfs from currRow,currCol to it's neighbours containing initialColor
    void dfs(vector<vector<int> > &image,int currRow ,int currCol,int initialColor,int newColor){
        int n=image.size(); 
        int m=image[0].size();
        if(currRow < 0 || currCol < 0 || currRow >=n || currCol >=m ){
            return ; // outside the grid
        }
        //if the cell you landed is not of initial color
        if(image[currRow][currCol] != initialColor ) return ;

        // mtlb upr ki condition check ho chuki hai aur ye ensure ho
        //chuka hai ki grid ke bahr nhi gye hai and initialColor ke equal hai that completely means 
        //color update hoga with newColor

        image[currRow][currCol]=newColor; 
        
        dfs(image,currRow+1 ,currCol ,initialColor , newColor); //downward
        dfs(image,currRow ,currCol-1 ,initialColor , newColor); //left
        dfs(image,currRow-1 ,currCol ,initialColor , newColor); //upward
        dfs(image,currRow ,currCol+1 ,initialColor , newColor); //right
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc] ) return image; //no changes required to be made
        dfs(image,sr,sc,image[sr][sc],color); 
        return image;
    }
    
};
int main(){
    Solution s;
    int n,m; cin>>n>>m;
    vector<vector<int> > image(n,vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>image[i][j];
        }
    }
    int sr,sc,color; cin>>sr>>sc>>color;
    image=s.floodFill(image,sr,sc,color);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}