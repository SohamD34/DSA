// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    int get_minutes(string s){
        return ((s[0]-'0')*10 + (s[1]-'0'))*60 + (s[3]-'0')*10 + (s[4]-'0');
    }

    int findMinDifference(vector<string>& timePoints) {
        
        vector<int> minutes;

        for(auto i:timePoints){
            minutes.push_back(get_minutes(i));
        }

        sort(minutes.begin(), minutes.end());

        int m = minutes.size();
        int min_diff = INT_MAX;

        for(int i=0; i<m-1; i++){
            min_diff = min(min_diff, minutes[i+1] - minutes[i]);
        }

        return min(min_diff, 1440 - minutes[m-1]+minutes[0]);

    }
};