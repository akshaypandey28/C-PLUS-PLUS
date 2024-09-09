#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
    while(t--){
        int answer=0;
        vector<vector<char>> v(11,vector<char>(11));
        for(int i=1; i<11; i++){
            for(int j=1; j<11; j++){
                cin>>v[i][j];
            }
        }
        for(int i=1; i<11; i++){
            for(int j=1; j<11; j++){
                if(v[i][j]=='X'){
                    if(i==1||j==1||i==10||j==10)
                    answer+=1;
                    else if(i==2||j==2||i==9||j==9)
                        answer+=2;
                    else if(i==3||j==3||i==8||j==8)
                        answer+=3;
                    else if(i==4||j==4||i==7||j==7)
                        answer+=4;
                    else if(i==5||j==5||i==6||j==6)
                        answer+=5;

                }
            }
        }
        cout<<answer<<endl;
    }
return 0;
}