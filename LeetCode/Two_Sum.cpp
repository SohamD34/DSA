#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> TwoSum(vector<int> &nums, int target){

    unordered_map<int, int> M;
    int n = nums.size();
    vector<int> v;

    for(int i=0; i<n; i++){
        M[nums[i]] = i+1;
    }

    for(int i=0; i<n; i++){

        if(M[target - nums[i]] && (M[target - nums[i]]-1 != i)){
            v.push_back(i);
            v.push_back(M[target - nums[i]]-1);
            break;
        }
    }

    return v; 

}


int main(){

    vector<int> nums = {3, 2, 4};

    vector<int> ans = TwoSum(nums, 6);
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}