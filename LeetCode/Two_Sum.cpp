#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

'''
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
'''

vector<int> twoSum(vector<int>& nums, int target) {
    
    unordered_map<int, int> M;
    vector<int> ans;

    for(int i=0; i<nums.size(); ++i){
        
        if(M.find(target-nums[i]) != M.end()){
            ans.push_back(M[target-nums[i]]-1);
            ans.push_back(i);
            break;
        }
        else{
            M[nums[i]] = i+1;
        }
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> nums = {2, 7, 13, 11, 15};
    int target = 15;

    vector<int> ans = twoSum(nums, target);

    for(auto i: ans){
        cout << i << " ";
    }

    return 0;
}