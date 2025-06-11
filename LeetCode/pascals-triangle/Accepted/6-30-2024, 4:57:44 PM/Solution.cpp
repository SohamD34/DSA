// https://leetcode.com/problems/pascals-triangle

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> ans;

        // for(int i=0; i<numRows; i++){

        //     if(i==0){
        //         ans.push_back({1});
        //     }
        //     else if(i==1){
        //         ans.push_back({1,1});
        //     }
        //     else{
        //         vector<int> dummy;
        //         dummy.push_back(1);

        //         for(int j=1; j<ans[i-1].size(); j++){
        //             dummy.push_back(ans[i-1][j-1] + ans[i-1][j]);
        //         }
        //         dummy.push_back(1);
        //         ans.push_back(dummy);
        //     }
        // }

        // return ans;

        vector<vector<int>> pt;
        for(int i=0;i<numRows;i++){
            vector<int> row;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)
                    row.push_back(1);
                else
                    row.push_back(pt[i-1][j-1] + pt[i-1][j]);
            }
            pt.push_back(row);
        }
        return pt;

    }
};