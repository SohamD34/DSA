#include <bits/stdc++.h>
using namespace std;


void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

vector<int> findDisappearedNumbers(vector<int>& nums) {
    
    for(int i=0;i<nums.size();i++){
        int index = abs(nums[i]) - 1; 
        if(nums[index] > 0) {
            nums[index] = -nums[index]; 
        }
    }

    vector<int> result;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0) {
            result.push_back(i + 1); 
        }
    }
    return result;
}

int main(){

    vector<int> v = {4,3,2,7,8,2,3,1};
    vector<int> ans = findDisappearedNumbers(v);

    print(ans);

    return 0;
}