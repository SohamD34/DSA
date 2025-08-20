#include <bits/stdc++.h>
using namespace std;

// FAILED SOLUTION -- TIME LIMIT EXCEEDED

void print(vector<vector<int>> &v){

    for(int i=0;i<v.size();i++){
        for(auto j:v[i]){
            cout << j << ' ';
        }
        cout <<endl;
    }
}


vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    
    // int n1 = nums1.size();
    // int n2 = nums2.size();
    priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<>> pq;

    for(auto i:nums1){
        for(auto j:nums2){
            vector<int> v = {i, j};
            pq.push({i+j, v});
        }
    }

    vector<vector<int>> ans;
    while(!pq.empty() && k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> nums1 = {1,7,11};
    vector<int> nums2 = {2,4,6};
    int k = 3;
    vector<vector<int>> ans = kSmallestPairs(nums1, nums2, k);
    print(ans);

   return 0;
}