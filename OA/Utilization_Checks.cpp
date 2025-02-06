#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int finalInstances(int instances, vector<int>& averageUtil) {
        int n = averageUtil.size();
        int limit = 200000000;
        int i = 0;

        while (i < n) {
            if (averageUtil[i] < 25 && instances > 1) {
                instances = (instances + 1) / 2;
                i += 11;
            } 
            else if (averageUtil[i] > 60 && instances * 2 <= limit) {
                instances *= 2;
                i += 11;
            } 
            else i++;
            
        }

        return instances;
    }
};

int main(){
return 0;
}



/* import java.util.*;
import java.io.*;
import java.lang.*;

public class Solution {
    public int finalInstances(int instances, int[] averageUtil) {
        int n=averageUtil.length;
        int limit = 200000000;
        int i=0;
        while(i<n){
            if(averageUtil[i] < 25 && instances>1){
                instances=(instances+1)/2;
                i+=11;
            }
            
            else if(averageUtil[i] > 60 && instances * 2 <= limit){
                instances*=2;
                i+=11;
            }
            
            else i++;
        }
        return instances;
    }
}
 */