// https://leetcode.com/problems/intersection-of-two-arrays-ii

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> common;

        int n1 = nums1.size();
        sort(nums1.begin(), nums1.end());

        int n2 = nums2.size();
        sort(nums2.begin(), nums2.end());

        int ptr1 = 0;
        int ptr2 = 0;

        while(ptr1<n1 && ptr2<n2){

            if(nums1[ptr1] == nums2[ptr2]){
                common.push_back(nums1[ptr1]);
                ptr1++;
                ptr2++;
            }
            else{
                if(nums1[ptr1] > nums2[ptr2]){
                    ptr2++;
                }
                else{
                    ptr1++;
                }
            }
        }

        return common;
    }
};