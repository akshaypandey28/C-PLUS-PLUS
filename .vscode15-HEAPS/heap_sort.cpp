#include<bits/stdc++.h>
using namespace std;
class maxheap{
    vector<int> hp;
    int i; //[0,i] upto 0 to i everthing is maxheap
public:
    void upheapify(int ci){ // ci is child index
        while(ci>0){
            int pi= (ci-1)/2; // pi is parent index
            if(hp[pi]<hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else{
                break;
            }
        }
    }

    void downheapify(int idx,int bound){
        while(idx<hp.size()){
            int lc=2*idx+1; //left child
            int rc=2*idx+2; //right child
            if(lc>=bound) break; // because there is no child present of lc idx
//here break is used because when there is no left child present then right child cann't be there

            //there may be a case exist that rc exist but lc and vice versa
            int max_ele=idx; //initialise for finding the index of max element of the heap
            if(hp[lc]>hp[max_ele]){
                max_ele=lc;
            }
            if(rc < bound and hp[rc]>hp[max_ele]){
                max_ele=rc;
            }
            if(max_ele!=idx){
                swap(hp[idx],hp[max_ele]);
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
        hp.push_back(element);
        upheapify(hp.size()-1); // this is done because new element that has to be inserted into the heap 
        //is present at last index of the heap vector
    }

    void pop(){
        /* 
        Time: O(logn)
        */
        //removes the highest priority element 
        if(hp.empty()) return ;
        swap( hp[0] , hp[hp.size()-1] );
        i--;
        //downheapify executed only when after removing element heap must contain the elements
        if(!hp.empty()) downheapify(0,i);//0 because downheapify 0th index se krna hai
    }
    void display(){
        for(int j=0; j<i; j++){
            cout<<hp[j]<<" ";
        }
        cout<<endl;
    }

    maxheap(vector<int> v){
        /* 
        T.C => O(nlogn) as for each upheapify it's logn for n it's O(nlogn)

        T.C => O(n) for downheapify because we left the bottom most level and heapification done from second last
        level upto 1st level
        */

        hp=v;
        int n=hp.size();
        i=n;
        for(int j=n/2; j>=0; j--){
            downheapify(j,i);
        }
    }

    vector<int> heapSort(){ //HEAP SORT
        int sz=hp.size();
        while(sz>0){
            int el=0;
            swap(hp[el],hp[i]);
            i--;
            downheapify(0,i);
            sz--;
        }
        return hp;
    }
};
void heapSort(vector<int> &v){
    maxheap hp(v);
    v=hp.heapSort();
}
int main(int argc,char const *argv[]){
    vector<int> v {9,6,1,19,3,2,8,12,5};
    heapSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}