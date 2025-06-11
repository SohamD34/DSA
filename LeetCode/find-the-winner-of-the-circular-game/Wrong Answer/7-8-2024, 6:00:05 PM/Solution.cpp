// https://leetcode.com/problems/find-the-winner-of-the-circular-game

class Solution {
public:
    vector<int> arr;

    int findTheWinner(int n, int k) {
        
        for(int i=0; i<n; i++){
            arr.push_back(i+1);
        }

        int start = -1;
        int remove_index;

        while(n != 1){
            remove_index = (start+k)%n;
            start = remove_index;
            arr.erase(arr.begin()+remove_index);
            n--;
        }

        return arr[0];
    }
};