#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list<int> l1={1,2,3,4};
    
    /* auto itr=l1.begin();  //list<int> :: iterator itr;
    cout<<*itr<<endl;  //answer is 1
    cout<<"first"<<endl;

    auto itr1=l1.end();  //l1.end(); iterator to the memory position after 4
    cout<<*itr1<<endl; //answer is 4
    cout<<"second"<<endl;

    advance(itr,2);
    cout<<*itr<<endl; //answer is 3
    cout<<"third"<<endl;

    for(auto num:l1){ //using range based loop 
        cout<<num<<" ";
    }cout<<endl;
    cout<<"fourth"<<endl;

    for(auto itr=l1.begin(); itr!=l1.end(); itr++){ //using iterators
        cout<<*itr<<" ";
    }cout<<endl;
    cout<<"fifth"<<endl;

    for(auto itr=l1.rbegin(); itr!=l1.rend(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
    cout<<"six"<<endl; */

    //insertiing elements
    auto itr=l1.begin();
    advance(itr,2); //now pointing to 3 
    //l1.insert(itr,5);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){ //using iterators
        cout<<*itr<<" ";
    }cout<<endl;

    //l1.insert(itr,3,5);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){ //using iterators
        cout<<*itr<<" ";
    }cout<<endl;

    auto l=l1.begin();
    auto r=l1.begin();
    advance(r,2); //now r is pointing to 3
    l1.insert(itr,l,r);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){ //using iterators
        cout<<*itr<<" ";
    }cout<<endl;

    //currently list is 1 2 1 2 3 4
    auto s_itr=l1.begin();
    advance(s_itr,2); //s_itr pointing to 3rd element
    auto e_itr=l1.begin();
    advance(e_itr,4);//e_ptr is pointing to 5th element that is 3 value
    l1.erase(s_itr,e_itr);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){ //using iterators
        cout<<*itr<<" ";
    }cout<<endl;
return 0;
}