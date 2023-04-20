#include<bits/stdc++.h>
using namespace std;
string decodedstring(string s){
     string result="";
    for(int i=0; i<s.length(); i++){    //traversing the encoded string 
        if(s[i]!=']'){
            result.push_back(s[i]); } //isme result string me fill kiya ja rha hai
        else{
            // extract string from the result
            string str=""; // temporary string
            //while loop runs till the result string gets empty and result string gets equal to'['
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();     }

            reverse(str.begin(),str.end()); //reversing the str

            result.pop_back();  //remove last character of result which is '['
            string num="";
            while(!result.empty() && result.back()>='0' && result.back()<='9'){
                num.push_back(result.back());
                result.pop_back();     }

            reverse(num.begin(),num.end());
            int int_num=stoi(num);//convert string to integer
            while(int_num){  //inserting str in result int_num times till int_num becomes zero
                result=result+str;
                int_num--;    }
        }
    }      return result;      }
int main(){
    string s; cin>>s;      cout<<decodedstring(s)<<endl;        return 0;   }