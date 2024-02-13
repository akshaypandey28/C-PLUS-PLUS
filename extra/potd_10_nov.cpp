#include<bits/stdc++.h>
using namespace std;
string change(string S){
    stack<int> st;
    string ans="";
    int number=1;
    for(char element:S){ //element is defined with char
        st.push(number);
        number+=1;
        if(element=='I'){
            while(st.empty()!=1){
                int at_the_top=st.top();
                st.pop();
                char to_push=at_the_top+'0';
                ans.push_back(to_push);
            }
        }
    }
    st.push(number);
    while(st.empty()!=1){
        int at_the_top=st.top();
        st.pop();
        char to_push=at_the_top+'0';
        ans.push_back(to_push);
    }
    return ans;
}
int main(){
    string s; cin>>s;
    cout<<change(s)<<endl;
return 0;
}