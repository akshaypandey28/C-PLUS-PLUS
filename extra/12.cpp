#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rotateArr(int arr[], int n, int k){
        vector <int> v;
        cout<<n<<k<<endl;
        for (int  it = 0; it < n;it++){
            v.push_back(arr[it]);
            cout<<arr[it]<<" ";
        } cout<<endl;

        reverse(v.begin(),v.end());

        for(int i=0; i<n; i++){
            cout<<v[i]<<" ";  }
        cout<<endl;
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
    for (auto it: v){
        arr[it] = v[it];
    }
    }
};

int main() {
	int t;
	cin >> t;
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