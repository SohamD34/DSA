// https://leetcode.com/problems/most-beautiful-item-for-each-query

class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        // items = {price, beauty}
        // sort the items array based on prices

        sort(items.begin(), items.end());

        // also sort queries -- but then we will not be able to aanswer in the expected order, so we convert queries to pairs -- (queries[i], i) and sort.. use the 'i' later to put together the answer array.

        vector<pair<int, int>> Q;
        for(int i=0; i<queries.size(); i++){
            Q.push_back({queries[i], i});
        }

        sort(Q.begin(), Q.end());

        int max_beauty = 0;
        int j = 0;

        vector<int> ans(queries.size(), 0);

        for(auto pair:Q){

            int q = pair.first;
            int i = pair.second;

            while(j < items.size() && items[j][0] <= q){
                max_beauty = ((max_beauty > items[j][1]) ? max_beauty : items[j][1]);
                j++;
            }

            ans[i] = max_beauty;
        }

        return ans;
    }
};