#include<bits/stdc++.h>
/* https://leetcode.com/problems/permutations/ */
using namespace std;

/* 
Time => O(N! × N)
There are N! (factorial) permutations of an N-length string
Each recursive call performs O(N) work
*/
void all_permutations_of_string(string &str,int i){ //optimization of permutation function
    if(i==str.size()){
        cout<<str<<"\n";
        return;
    }
    unordered_set<char> s;//set is used for ignoring the calls of repeated character and this is for all function call
    for(int j=i; j<str.size(); j++){
        if(s.count(str[j])) continue; //if character is present already in the set then that particular is ignored
        s.insert(str[j]);
        swap(str[i],str[j]); //swapping such that each element has a chance 
        //for becoming first element
        all_permutations_of_string(str,i+1);
        swap(str[i],str[j]); //changes get reversed when returning to main step
    }
}
void permutation(string input,string output){ //another way of thinking
/* this function is such that making input string all character first character of the 
output string and after that ignore that particular character and remove it from the input string
and same procedure is applied on the remaining input  string
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
    string str="abc";
    all_permutations_of_string(str,0);
    permutation(str,"");
return 0;
}