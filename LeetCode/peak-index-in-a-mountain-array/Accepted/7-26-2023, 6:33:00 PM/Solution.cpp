// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int change_index = 0;
        int n = arr.size();

        for(int i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                change_index = i;
                break;
            }
        }

        return change_index;
    }
};