#include <bits/stdc++.h>
using namespace std;


/*
BACKTRACKING - using DP
*/

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

void getallSubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allsubsets, int i){

    if(i == nums.size()){
        allsubsets.push_back({ans});
        return;
    }

    // include
    ans.push_back(nums[i]);
    getallSubsets(nums, ans, allsubsets, i+1);

    // exclude
    ans.pop_back();
    getallSubsets(nums, ans, allsubsets, i+1);
}

vector<vector<int>> subsets(vector<int>& nums) {

    vector<vector<int>> allsubsets;
    vector<int> ans;
    getallSubsets(nums, ans, allsubsets, 0);

    return allsubsets;
}

int main(){

    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);
    for(auto &subset : result){ 
        print(subset);
    }

    nums = {0};
    result = subsets(nums);
    for(auto &subset : result){
        print(subset);
    }

    return 0;
}