// https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted

class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        
        int n = arr.size();
        int front = 0;
        int back = n-1;

        while(arr[back] >= arr[front]){
            front++;
            back--;
        }
        
        int ans = back - front;

        return max(ans, 0);
    }
};