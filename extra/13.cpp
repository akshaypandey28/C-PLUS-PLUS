#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotateArr(int v[], int n, int k){
    reverse(v,v+n);
    k=k%n;
    int left=0,right=n-1-k;
    while(left<=right){
        swap(v[left],v[right]);
        left++;
        right--;
    }
    int left1=n-k,right1=n-1;
    while(left1<=right1){
        swap(v[left1],v[right1]);
        left1++;
        right1--;
    }
    
    }
};

int main() {
	//while(t--){
	    int n, d;
	    cin >> n >> d;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    ob.rotateArr(arr, n,d);
	    
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	//}
	return 0;
}