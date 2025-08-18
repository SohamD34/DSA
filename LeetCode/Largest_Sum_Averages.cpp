#include <bits/stdc++.h>
using namespace std;


void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}


double largestSumOfAverages(vector<int> &nums, int k){
    /*
    Partition into at most 'k' subarrays --->  S1, S2, ... Si (i <= k)
    maximise =>        target = SUM (avg(S1) + avg(S2) + avg(S3)...)
    */

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums = {9,1,2,3,9};
    int k = 3;
    cout << largestSumOfAverages(nums, k) << endl;

    return 0;
}