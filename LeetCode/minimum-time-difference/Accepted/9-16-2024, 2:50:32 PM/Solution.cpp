// https://leetcode.com/problems/minimum-time-difference

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }

    int get_minutes(string s){
        string hours = s.substr(0,2);
        string minutes = s.substr(3);
        return stoi(hours)*60 + stoi(minutes);
    }

    int findMinDifference(vector<string>& timePoints) {
        
        vector<int> minutes;

        for(auto i:timePoints){
            int min = get_minutes(i);
            minutes.push_back(min);
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