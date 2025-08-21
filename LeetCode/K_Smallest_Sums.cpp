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


vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) { // time complexity is O(m*nlogk), m = nums1 size, n = nums2 size
        
    priority_queue<pair<int,pair<int,int>>> pq;  
        
    for(int i=0; i<nums1.size(); i++) {

        for(int j=0; j<nums2.size(); j++) {
            
            int sum=nums1[i]+nums2[j];
            
            if (pq.size()<k) {
                pq.push({sum,{nums1[i],nums2[j]}});
            }
            else if (sum<pq.top().first) {
                pq.pop();
                pq.push({sum,{nums1[i],nums2[j]}});
            } 
            else {
                break;  
            }
        }
    }

    vector<vector<int>> ans;
    while(!pq.empty()) {
        ans.push_back({pq.top().second.first, pq.top().second.second});
        pq.pop();
    }
    
    reverse(ans.begin(),ans.end());
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

    nums1 = {1,1,2};
    nums2 = {1,2,3};
    k = 2;
    ans = kSmallestPairs(nums1, nums2, k);
    print(ans);

   return 0;
}