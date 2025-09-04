#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    ifstream fin;
    fin.open("sort_temp.txt");
    vector<int> arr;

    int x;
    while(fin>>x) arr.push_back(x);

    sort(arr.begin(), arr.end());

    fin.close();

    ofstream fout;
    fout.open("sort_temp.txt");
    for(int i=0; i<arr.size(); i++){
        fout<<arr[i]<<" ";
    }
    fout.close();

}