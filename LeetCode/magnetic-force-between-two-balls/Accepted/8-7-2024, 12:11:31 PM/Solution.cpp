// https://leetcode.com/problems/magnetic-force-between-two-balls

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    bool canPlaceBalls(vector<int>& pos, int m, int dis) {
        int count = 1;
        int last = pos[0];
        int n = pos.size();

        for (int i = 1; i < n; i++) {
            if (pos[i] - last >= dis) {
                last = pos[i];
                count++;
            }
            if (count == m)
                return true;
        }
        return false;
    }

    int maxDistance(vector<int>& pos, int m) {

        int n = pos.size();
        sort(pos.begin(), pos.end());

        int start = 1;
        int end = (pos[n - 1] - pos[0]) / (m - 1);
        int ans = 1;

        while (start <= end) {

            int mid = start + (end-start)/2;

            if (canPlaceBalls(pos, m, mid)){
                ans = mid;
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
};