/* Q3 - Write a function that returns the largest and the smallest number out of 3 given numbers.
The main function should call this function to get the largest and smallest number and print
the output. */
#include<bits/stdc++.h>
using namespace std;
int maxandmin(int *smallest,int *largest,int a,int b,int c){
    *largest=max(a,max(b,c));
    *smallest= min(a,min(b,c));
}
int main(){
    int a,b,c; cin>>a>>b>>c;
    int largest;
    int smallest;//=small(a,b,c,&largest);
    maxandmin(&smallest,&largest,a,b,c);
    cout<<"LARGEST IS "<<largest<<endl;
    cout<<"SMALLEST IS "<<smallest<<endl;
return 0;
}