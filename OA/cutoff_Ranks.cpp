#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int cutOffRank(int cutOffRank, int num, vector<int>& scores) {
        // Create a frequency array for scores from 0 to 100
        vector<int> freq(101, 0);
        
        // Count the frequency of each score
        for (int score : scores) {
            freq[score]++;
        }

        int count = 0; // To store the answer: number of students within the cutoff rank
        int nextRank = 1;  // To keep track of the current rank

        // Iterate from the highest score (100) to the lowest (0)
        for (int i = 100; i >= 0; i--) {
            if (freq[i] == 0) continue;  // Skip if no students have this score
            
            // If the rank exceeds the cutoff rank, stop processing
            if (nextRank > cutOffRank) break;
            
            int students = freq[i];
            
            // Update rank and count students for the current score
            nextRank += students; // As the first student with this score has already been counted
            count += students; // Add the students with this score to the final count
        }

        return count; // Return the final count of students within the cutoff rank
    }
};

int main(){
return 0;
}


/* 
import java.util.*;
import java.io.*;
import java.lang.*;

public class Solution {
    public int cutOffRank(int cutOffRank, int num, int[] scores) {
        // Create a frequency array for scores from 0 to 100
        int[] freq = new int[101];
        
        // Count the frequency of each score
        for (int score : scores) {
            freq[score]++;
        }

        int count = 0; // To store the answer: number of students within the cutoff rank
        int nextRank = 1;  // To keep track of the current rank

        // Iterate from the highest score (100) to the lowest (0)
        for (int i = 100; i >= 0; i--) {
            if (freq[i] == 0) continue;  // Skip if no students have this score
            
            // If the rank exceeds the cutoff rank, stop processing
            if (nextRank > cutOffRank) break;
            
            int students=freq[i];
            
            // Update rank and count students for the current score
            nextRank = nextRank + students; // As the first student with this score has already been counted
            count += students; // Add the students with this score to the final count
        }

        return count; // Return the final count of students within the cutoff rank
    }
}

 */