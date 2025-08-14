#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {

    vector<string> res;
    if (nums.empty()){
        return res;
    }

    int start = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1] + 1) {
            if (start == i - 1){
                res.push_back(to_string(nums[start]));
            }
            else{
                res.push_back(to_string(nums[start]) + "->" + to_string(nums[i - 1]));
            }
            start = i;
        }
    }

    if (start == nums.size() - 1){
        res.push_back(to_string(nums[start]));
    }
    else{
        res.push_back(to_string(nums[start]) + "->" + to_string(nums.back()));
    }

    return res;
}


void print(vector<string> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}


int main() {
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> result = summaryRanges(nums);
    print(result);

    // nums = {0, 2, 3, 4, 6, 8, 9};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {1,2,3,4,5};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {1,3};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {1};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {-2147483648,-2147483647,2147483647};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {-5,-4,-2,-1,0,1,2};
    // result = summaryRanges(nums);
    // print(result);

    // nums = {-1};
    // result = summaryRanges(nums);
    // print(result);

    nums = {7, 5, 4, 3, 1, 0};
        result = summaryRanges(nums);
        print(result);
    
    return 0;
}