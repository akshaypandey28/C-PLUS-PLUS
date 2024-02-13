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
void permutation(string input,string output){ //another way of thinking
/* this function is such that making input string all character first character of the 
output string and after that ignore that particular character and remove it from the input string
and same procedure is applied on the remaining input string
*/
    if(input.size()==0){
        cout<<output<<" ";
        return ;
    }
    for(int i=0; i<input.size(); i++){
        char ch=input[i]; //making a character first character of the required string 
        string left=input.substr(0,i); //left string after making first character
        string right=input.substr(i+1);//right string after making first character
        string ros=left+right;
        permutation(ros,output+ch);
    }
}
int main(){
    string str="821";
    all_permutations_of_string(str,0);
    permutation(str,"");
return 0;
}