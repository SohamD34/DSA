#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

/*
[]
[2,5]
[[3,5],[8,10]]
[1,2]
[[1,3],[6,9]]
[11,12]
[[1,3],[6,9]]
[2,5]
[[1,2],[3,5],[8,10]]
[2,9]
[[1,3],[6,9]]
[2,7]
[[1,3],[6,9]]
[4,7]
[[1,3],[6,9]]
[3,6]
*/

int main(){

    vector<vector<int>> intervals = {{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int> newInterval = {4,8};

    int n = intervals.size();

    for (int i=0; i<n; i++){
        if(intervals[i][0] > newInterval[0]){
            intervals.insert(intervals.begin()+i, newInterval);
            break;
        }
    }

    vector<vector<int>> newintervals;
    int start = 0;
    int end = 0;
    int start_val, end_val = 0,0;

    while (start < n){

        start_val = intervals[start][0];
        

        
    }

    for (auto i: newintervals){
        cout<<i[0]<<" "<<i[1]<<endl;
    }

}