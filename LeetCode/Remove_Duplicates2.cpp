#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v, int k){
    
    // printing the starting k elements - at most twice repeating
    
    for(int i=0; i<k; i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}


int removeDuplicates(vector<int>& nums) {


    /*
    
    1 1 1 2 2 3
    1 1

    curr  = 1
    count = 0
    i = 0 ---> count = 1 ---> arr[j] = 1 ---> j++
    i = 1 ---> count = 2 ---> arr[j] = 1 ---> j++ 
    i = 2 ---> count = 3 ---> nothing
    i = 3 ---> curr = 2 ---> count = 1 ---> arr[j] = 2 ---> j++
    i = 4 ---> count = 2 ---> arr[j] = 2 ---> j++
    i = 5 ---> curr = 3 ---> count = 1 ---> arr[j] = 3

    */


    int n = nums.size();
    int curr = nums[0];
    int count = 0;
    int k = 0;

    for(int i=0; i<n; i++){

        if(nums[i] == curr){
            
            if(count < 2){
                count ++;
                nums[k] = nums[i];
                k++;
            }
        }
        else{
            curr = nums[i];
            count = 1;
            nums[k] = curr;
            k++;
        }
    }
    
    return k;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // vector<int> nums = {1,1,1,2,2,3};
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int k = removeDuplicates(nums);
    cout<<k<<endl;

    return 0;
} 