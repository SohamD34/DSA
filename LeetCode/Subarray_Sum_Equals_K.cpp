#include<iostream>
#include<vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        
    int count = 0;
    int n = nums.size();
    
    for(int start=0; start<n; start++){

        int sum = 0;
        // cout<<"start: "<<start<<endl;

        for(int end=start; end<n; end++){

            sum+=nums[end];
            // cout<<"start: "<<start<<" end: "<<end<<" "<<"sum: "<<sum<<endl;

            if(sum == k){
                count += 1;
            }
        }
    }
    return count;
}


int main(){

    vector<int> nums = {1,-1,1,-1};
    int k = 0;

    cout<<subarraySum(nums, k)<<endl;

    return 0;
}