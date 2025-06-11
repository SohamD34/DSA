// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    double average(vector<int>& salary) {
        
        int max_sal = 0;
        int min_sal = salary[0];

        for(auto i:salary){
            if(i > max_sal){
                max_sal = i;
            }
            if(i<min_sal){
                min_sal = i;
            }
        }

        int sum = 0;
        for(auto i:salary){
            if(i!=max_sal && i!=min_sal){
                sum += i;
            }
        }

        return (float)sum/(salary.size()-2);
    }
};