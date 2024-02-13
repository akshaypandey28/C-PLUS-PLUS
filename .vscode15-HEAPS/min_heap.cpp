#include<bits/stdc++.h>
using namespace std;
class minheap{
    vector<int> hp;
public:
    void upheapify(int ci){ // ci is child index
        while(ci>0){
            int pi= (ci-1)/2; // pi is parent index
            if(hp[pi]>hp[ci]){
                swap(hp[pi],hp[ci]);
                ci=pi;
            }
            else{
                break;
            }
        }
    }

    void downheapify(int idx){ 
        while(idx<hp.size()){
            int lc=2*idx+1; //left child
            int rc=2*idx+2; //right child
            if(lc>=hp.size()) break; // because there is no child present of lc idx
//here break is used because when there is no left child present then right child cann't be there

            //there may be a case exist that rc exist but lc and vice versa
            int max_ele=idx; //initialise for finding the index of max element of the heap
            if(hp[lc]<hp[max_ele]){
                max_ele=lc;
            }
            if(rc < hp.size() and hp[rc]<hp[max_ele]){
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
        if(empty()) return ;
        swap( hp[0] , hp[hp.size()-1] );
        hp.pop_back(); 
        //downheapify executed only when after removing element heap must contain the elements
        if(!empty()) downheapify(0);
    }
    int peek(){
        /* 
        Time: O(1)
         */
        if(empty()) return INT_MIN;
        return hp[0];
    }
    bool empty(){
        return hp.size()==0;
    }

    void display(){
        for(int i=0; i<hp.size(); i++){
            cout<<hp[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    minheap hp;
    hp.push(142);
    hp.push(543);
    hp.push(123);
    hp.push(65);
    hp.push(453);
    hp.push(879);
    hp.push(572);
    hp.push(434);
    hp.push(111);
    hp.push(242);
    hp.push(811);
    hp.push(102);
    hp.display();
    hp.pop();
    hp.display();
return 0;
}