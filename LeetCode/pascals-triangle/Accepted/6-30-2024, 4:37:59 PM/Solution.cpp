// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=0; i<numRows; i++){

            if(i==0){
                ans.push_back({1});
            }
            else if(i==1){
                ans.push_back({1,1});
            }
            else{
                vector<int> prevRow = ans[i-1];
                vector<int> Row = {1};

                for(int j=0; j<prevRow.size()-1; j++){
                    int back_val = prevRow[j];
                    int front_val = prevRow[j+1];
                    Row.push_back(back_val + front_val);
                }
                Row.push_back(1);
                ans.push_back(Row);
            }
        }

        return ans;
    }
};