// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // search the row where the last element is larger than target
        // Use binary search on columns

        int m = matrix.size();
        int n = matrix[0].size();

        // Now we have the array in which we have to search for the target
        // Use binary search to locate the target

        int low = 0;
        int high = m*n-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            int elem = matrix[mid/n][mid%n];

            if(elem == target){
                return true;
            }
            else if(elem < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return false;
    }
};