#include<iostream>
using namespace std;
int main(){
    
   int array[]={3,20,18,9,21};
   int key=9;
   int ans=-1;


   for(int i=0; i<5; i++){
    if(array[i]==key){
    ans=i;
    }
   }
   cout<<ans<<endl;
    

    

    
    return 0;
}
