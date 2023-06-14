#include<bits/stdc++.h>
using namespace std;
void all_permutations_of_string(string &str,int i){
    if(i==str.size()){
        cout<<str<<"\n";
        return;
    }
    for(int j=i; j<str.size(); j++){
        swap(str[i],str[j]); //swapping such that each element has a chance 
        //for becoming first element
        all_permutations_of_string(str,i+1);
        swap(str[i],str[j]); //changes get reversed when returning to main step
    }
}
int main(){
    string str="1234";
    all_permutations_of_string(str,0);
return 0;
}