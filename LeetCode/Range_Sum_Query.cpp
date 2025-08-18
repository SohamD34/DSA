#include <bits/stdc++.h>
using namespace std;

class NumArray {
private:
    vector<int> prefix_sum;

public:
    NumArray(vector<int>& nums) {
        
        int s = 0;
        for(int i=0; i<nums.size(); i++){
            prefix_sum.push_back(s);
            s += nums[i];
        }
        prefix_sum.push_back(s);
    }
    
    int sumRange(int left, int right) {
        
        // nums   -2  0  3 -5  2 -1
        // i       0  1  2  3  4  5
        // prefix  0 -2 -2  1 -4 -2 -3

        // left = 2, right = 5
        // ans = 3 + (-5) + 2 + (-1) = -1
        // prefix[right+1] - prefix[left]

        return prefix_sum[right+1] - prefix_sum[left];
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    NumArray* obj = new NumArray(nums);
    
    cout << obj->sumRange(0, 2) << endl;
    cout << obj->sumRange(2, 5) << endl;
    cout << obj->sumRange(0, 5) << endl;
    
    return 0;
}