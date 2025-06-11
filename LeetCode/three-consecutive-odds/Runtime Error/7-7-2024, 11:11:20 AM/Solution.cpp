// https://leetcode.com/problems/three-consecutive-odds

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        // int n = ;

        for(int i=0; i<arr.size()-2; i++){
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
            }
        }
        return false;
    }
};