#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> record; //roll no,name
    record.insert(make_pair(3,"ria"));
    record[1]="bali";
    record[2]="animesh";
    record[6]="akshay";
    for(auto ele:record){
        cout<<ele.first<<"---"<<ele.second<<endl;
    }
return 0;
}