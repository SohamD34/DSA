#include <bits/stdc++.h>
using namespace std;

int searchZero(vector<int> &nums, int n){

    int i;
    for(i=0; i<n; i++){
        if(nums[i] == 0){
            return i;
        }
    }
    return i;
}

long long zeroFilledSubarray(vector<int> &nums){

    int n = nums.size();
    long long count = 0;

    // base case -- if no 0 in array -- return count = 0
    int zero_i = searchZero(nums, n);
    if(zero_i == n){
        return 0;
    }
    
    // For a given array [0 0 0 .. k times] --> all possible subarrays = k*(k+1)/2
    // calculate lengths of 0 subarrays
    // for each -- calculate counts
    // add to total count

    long long length = 0;

    for(int i=zero_i; i<n; i++){
        if(nums[i] == 0){
            length++;
        }
        else{
            count += length*(length+1)/2;
            length = 0;
        }
    }

    count += length*(length+1)/2;
    return count;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums = {1,3,0,0,2,0,0,4};
    cout << zeroFilledSubarray(nums) <<endl;

    nums = {0,0,0,2,0,0};
    cout << zeroFilledSubarray(nums) <<endl;

    nums = {2,10,2019};
    cout << zeroFilledSubarray(nums) <<endl;

    return 0;
}