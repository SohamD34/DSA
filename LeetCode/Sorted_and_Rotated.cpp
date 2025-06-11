#include <iostream>
#include <vector>
using namespace std;

/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). 
Otherwise, return false. There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
*/


bool check(vector<int>& nums) {
        
    int n = nums.size();
    int cnt = 0;

    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            cnt++;
        }
    }
    if(nums[n-1]>nums[0]){
        cnt++;
    }
    return cnt<=1;
}

int main(){

    vector<int> nums = {4,5,6,7,0,1,2};
    // vector<int> nums = {3,4,1,2,5};
    // vector<int> nums = {2,1,3,4};
    // vector<int> nums = {1,2,3,4};

    cout<<check(nums)<<endl;

    return 0;
}