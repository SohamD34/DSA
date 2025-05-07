#include <iostream>
#include <vector>
using namespace std;

/*
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that 
i < j < k and 
nums[i] < nums[j] < nums[k]
If no such indices exists, return false.

Example 1:
Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.

Example 2:
Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.

Example 3:
Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
*/
 

int main(){

    // vector<int> nums = {1,2,3,4,5};
    vector<int> nums = {5,4,3,2,1};
    // vector<int> nums = {2,1,5,0,4,6};

    int n = nums.size();

    for(int i=0; i<n; i++){

        vector<int> temp;
        temp.push_back(nums[i]);

        int mark_j = 0;

        for(int j=i+1; j<n; j++){
            if(nums[j] > temp[0]){
                temp.push_back(nums[j]);
                mark_j = j;
                break;
            }
        }

        for (int k=mark_j+1; k<n; k++){
            if(nums[k] > temp[1]){
                temp.push_back(nums[k]);
                cout<<"true"<<endl;
                return 0;
            }
        }
    }

    cout<<"false"<<endl;
    
    return 0;
}