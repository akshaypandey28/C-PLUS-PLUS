#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={12,2,30,50,0};

    //file ko open kro
    ofstream fout;
    //fout.open("zoom.txt"); //if i want to store array in zoom.txt file

    fout.open("array.txt");

    fout<<"original array is: "<<endl;
    for(int i=0; i<arr.size(); i++){
        fout<<arr[i]<<" ";
    }
    fout<<endl;
    
    fout<<"sorted array is: "<<endl;
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        fout<<arr[i]<<" ";
    }

    fout.close();
}