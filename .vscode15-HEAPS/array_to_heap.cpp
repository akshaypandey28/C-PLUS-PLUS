#include<bits/stdc++.h>
using namespace std;
class maxheap{
    vector<int> hp1,hp2;
    int i; //[0,i] upto 0 to i everthing is maxheap
public:
    void upheapify(int ci){ // ci is child index
        while(ci>0){
            int pi= (ci-1)/2; // pi is parent index
            if(hp1[pi]<hp1[ci]){
                swap(hp1[pi],hp1[ci]);
                ci=pi;
            }
            else{
                break;
            }
        }
    }

    void downheapify(int idx){
        while(idx<hp2.size()){
            int lc=2*idx+1; //left child
            int rc=2*idx+2; //right child
            if(lc>=hp2.size()) break; // because there is no child present of lc idx
//here break is used because when there is no left child present then right child cann't be there

            //there may be a case exist that rc exist but lc and vice versa
            int max_ele=idx; //initialise for finding the index of max element of the heap
            if(hp2[lc]>hp2[max_ele]){
                max_ele=lc;
            }
            if(rc < hp2.size() and hp2[rc]>hp2[max_ele]){
                max_ele=rc;
            }
            if(max_ele!=idx){
                swap(hp2[idx],hp2[max_ele]);
                idx=max_ele;
            }
            else{
                break ;
            }
        }
    }

    void push(int element){
        /* 
        Time: O(logn)
         */
        hp1.push_back(element);
        upheapify(hp1.size()-1); // this is done because new element that has to be inserted into the heap 
        //is present at last index of the heap vector
    }

    void display1(){
        for(int i=0; i<hp1.size(); i++){
            cout<<hp1[i]<<" ";
        }
        cout<<endl;
    }
    void display2(){
        for(int i=0; i<hp2.size(); i++){
            cout<<hp2[i]<<" ";
        }
        cout<<endl;
    }
    maxheap(vector<int> v1,vector<int> v2){
        /* 
        T.C => O(nlogn) as for each upheapify it's logn for n it's O(nlogn)

        T.C => O(n) for downheapify because we left the bottom most level and heapification done from second last
        level upto 1st level
         */

        hp1=v1;
        for(int i=1; i<hp1.size();i++){
            upheapify(i);
        }

        hp2=v2;
        int n=hp2.size();
        for(int i=n/2; i>=0; i--){
            downheapify(i);
        }
    }
};
int main(){
    vector<int> v1 {9,6,1,19,3,2,8,12,5};
    vector<int> v2 {9,6,1,19,3,2,8,12,5};
    maxheap hp(v1,v2);
    hp.display1();
    hp.push(100);
    hp.display1();
    hp.display2();

    return 0;
}