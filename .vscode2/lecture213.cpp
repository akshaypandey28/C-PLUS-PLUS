#include<iostream>
#include<vector>
using namespace std;
   int rectanglesum(vector<vector<int>> &v,int L1, int R1, int L2, int R2){
    int sum=0;  
    // prefix sum array row-wise 
    for(int i=0; i<v.size(); i++){
        for(int j=1; j<v[0].size();j++){
            v[i][j]=v[i][j]+ v[i][j-1];   
        }  }  cout<<"PREFIX SUM MATRIX row wise IS "<<endl;   //row wise
        for(int i=0; i<v.size(); i++){
      for(int j=0; j<v[0].size(); j++){
        cout<<v[i][j]<<" ";   //row wise
        }   cout<<endl;    }
        // prefix sum array column-wise
        for(int i=1; i<v.size(); i++){
            for(int j=0; j<v[0].size(); j++){
                v[i][j]=v[i][j]+v[i-1][j];  
            } }   cout<<"PREFIX SUM MATRIX column wise IS "<<endl;   //column wise
        for(int i=0; i<v.size(); i++){
      for(int j=0; j<v[0].size(); j++){
        cout<<v[i][j]<<" ";   //column wise
        }   cout<<endl;    }
        int top_sum =0, left_sum=0, topleft_sum=0;
        if(L1!=0) top_sum=v[L1-1][R2]; cout<<top_sum<<endl;
        if(R1!=0) left_sum=v[L2][R1-1]; cout<<left_sum<<endl;
        if(L1!=0 && R1!=0) topleft_sum=v[L1-1][R1-1]; cout<<topleft_sum<<endl;
    sum= v[L2][R2]-top_sum - left_sum + topleft_sum;
    return sum;    }
int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cin>>vec[i][j];
            }     }
    int  L1,R1,L2,R2; cin>>L1>>R1>>L2>>R2;
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cout<<vec[i][j]<<" ";
        }   cout<<endl;    }
    int sum=rectanglesum(vec,L1,R1,L2,R2);
    cout<<"RECTANGLE SUM = "<<sum<<endl;    return 0;    }