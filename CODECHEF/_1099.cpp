/* #include<bits/stdc++.h>
using namespace std;
int counting(string &str){
    stack<char> st;
    st.push(str[0]);
    int count=0;
    for(int i=1; i<str.size(); i++){
        if(str[i]==st.top()){
            st.push(str[i]);
        }
        else{

        }
    }
}
int main(){
    string str;
    cout<<counting(str);
return 0;
} */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count1=0;
    int count2=0;
    string str; cin>>str;
    int n=str.size();
    vector<int> u(n,0);
    vector<int> d(n,0);
    
    for(int i=0; i<str.size(); i++){
        int idx1=0;
        int idx2=0;
        while(str[i]=='U'){
            u[idx1]++;
            i++;
            if(str[i]!='U'){
                idx1++;
            }
        }
        while(str[i]=='D'){
            d[idx2]++;
            if(str[i]!='D'){
                idx2++;
            }
        }
           }
            for(int i=0; i<n; i++){
            if(u[i]!=0){
                count1++;
            }
            if(d[i]!=0){
                count2++;
            }
        }
        cout<<min(count1,count2)<<endl;
return 0;
} 