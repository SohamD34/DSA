// https://leetcode.com/problems/kth-distinct-string-in-an-array

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        unordered_map<string, int> M;

        for(auto i:arr){
            if(M[i]){
                M[i]++;
            }
            else{
                M[i] = 1;
            }
        }

        int count = 0;

        for(auto i:arr){
            if(M[i]==1){
                count ++;
            }

            if(count == k){
                return i;
            }
        }
        return "";
    }
};