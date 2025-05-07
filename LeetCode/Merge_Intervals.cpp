#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
    sort(intervals.begin(), intervals.end());

    int curr_start = 0;
    int curr_end = 0;
    int new_start;
    int new_end;
    
    vector<vector<int>> merged_intervals;

    for(int i = 0; i < intervals.size(); i++){
        if(i == 0){
            curr_start = intervals[i][0];
            curr_end = intervals[i][1];
        }
        else{
            new_start = intervals[i][0];
            new_end = intervals[i][1];

            if(new_start <= curr_end){
                curr_end = max(curr_end, new_end);
            }
            else{
                merged_intervals.push_back({curr_start, curr_end});
                curr_start = new_start;
                curr_end = new_end;
            }
        }
    }

    merged_intervals.push_back({curr_start, curr_end});
    return merged_intervals;
}

int main(){

    // vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> intervals = {{1,4},{4,5}};
    vector<vector<int>> merged_intervals = merge(intervals);

    for(auto interval : merged_intervals){
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
 
    return 0;
}