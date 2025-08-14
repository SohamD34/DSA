#include <bits/stdc++.h>
using namespace std;

void print(const vector<int>& v) {
    for (const auto& i : v) {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> maxSlidingWindow(vector<int>& nums, int k) {

    int n=nums.size();
    priority_queue <pair<int, int>> pq;
    vector<int> ans(n-k+1);
    
    // use priority queue to find out the largest elem 

    // Push first k elems -- 1st window's max elem
    for (int i=0; i<k; i++){
        pq.push({nums[i], i});
    }
    ans[0] = pq.top().first;

    // Now for the next windows
    for(int i=k; i<n; i++){

        // Pop up element not in the window
        while(!pq.empty() && pq.top().second<=(i-k)){
            pq.pop();                       
        }

        // 
        pq.push({nums[i], i});
        ans[i-k+1] = pq.top().first;        //Max element for this window
    }
    return ans;
}


int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    print(maxSlidingWindow(nums, k));

    nums = {1};
    k = 1;
    print(maxSlidingWindow(nums, k));
}