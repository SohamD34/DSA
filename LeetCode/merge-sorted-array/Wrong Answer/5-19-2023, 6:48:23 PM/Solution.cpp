// https://leetcode.com/problems/merge-sorted-array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int total = nums1.size();
        for(int i=m;i<total;i++){
            nums1[i] = nums2[i - m];
        }
    }
};