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
        string minutes = s.substr(3,2);
        return stoi(hours)*60 + stoi(minutes);
    }

    int findMinDifference(vector<string>& timePoints) {
        
        int n = timePoints.size();

        vector<int> minutes;

        for(auto i:timePoints){
            int min = get_minutes(i);
            if(min == 0){
                minutes.push_back(min);
                minutes.push_back(1440);
            }
            else{
                minutes.push_back(min);
            }
        }

        sort(minutes.begin(), minutes.end());
        int m = minutes.size();
        int min_diff = 1440;

        for(int i=0; i<m-1; i++){
            int diff = minutes[i+1] - minutes[i];

            if(diff < min_diff){
                min_diff = diff;
            }
        }

        return min(min_diff, 24*60 - minutes[m-1]*minutes[0]);

    }
};