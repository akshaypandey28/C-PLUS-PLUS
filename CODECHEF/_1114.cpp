#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int  N1, N2 ,N3; cin>>N1>>N2>>N3;
	vector<int> a(N1);
	vector<int> b(N2);
	vector<int> c(N3);
    for(int i=0; i<N1; i++){
        cin>>a[i];
    }
    for(int i=0; i<N2; i++){
        cin>>b[i];
    }
    for(int i=0; i<N3; i++){
        cin>>c[i];
    }
	int n=max(a[N1-1],max(b[N2-1],c[N3-1]));
    //cout<<n<<endl;
	vector<int> d(n+1,0);
    vector<int> f(n+1,0);
    for(int i=0; i<N1; i++){
        d[a[i]]++;
        f[a[i]]=a[i];
    }
    for(int i=0; i<N2; i++){
        d[b[i]]++;
        f[b[i]]=b[i];
    }
    for(int i=0; i<N3; i++){
        d[c[i]]++;
        f[c[i]]=c[i];
    }
 /*    for(int i=0; i<d.size(); i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<f.size(); i++){
        cout<<f[i]<<" ";
    }
    cout<<endl; */
    vector<int>e;
    for(int i=0; i<d.size();i++){
        if(d[i]>=2){
            e.push_back(f[i]);
        }
    }
    cout<<e.size()<<endl;
    for(auto ele:e){
        cout<<ele<<endl;
    }


	
	
	
	return 0;
}
