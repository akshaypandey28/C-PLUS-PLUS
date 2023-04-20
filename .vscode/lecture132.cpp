#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;    //size is not decided
    for(int i=0; i<5; i++){
       int element;
        cin>>element;
        v.push_back(element);
    }
     for(int i=0; i<v.size(); i++){     //for loop
        cout<<v[i]<<" ";
    }
       cout<<endl;  //size is decided of size=5

    v.insert(v.begin()+2,6);     //inserting of elements

    for(int ele:v){          //for each loop
        cout<<ele<<" ";
    }
    cout<<endl;

    v.erase(v.end()-2);   //erasing of elements

    int idx=0;
    while(idx<v.size()){     //while loop
        cout<<v[idx]<<" ";
        idx++;
    }
    cout<<endl;
    return 0;
}