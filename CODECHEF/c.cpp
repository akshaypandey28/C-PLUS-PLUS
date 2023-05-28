#include<bits/stdc++.h>
using namespace std;
int main(){
   int t; cin>>t;
   for(int i=1; i<=t; i++){
        int n,a,b; cin>>n>>a>>b;
        int array[n];
		int digits=n;
        int index=0;
        while(a>0 && b>0){
            int power=1;
			int temp=n-1;
			while(temp>0){
				power=power*10;
				temp--;
			}
            int d=a/power;
            int e=b%10;
            a=a%power;
            b=b/10;   
            n=n-1;
            array[index]=(d+e)%10; 
            index=index+1;
        }
        for(int j=0;j<digits; j++){
            cout<<array[j];
        }
        cout<<endl;
    }
return 0;
}