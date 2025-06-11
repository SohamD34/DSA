// https://leetcode.com/problems/convert-the-temperature

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
        vector<double> ans = {celsius + 273.15, (celsius*1.8) + 32};
        return ans;
    }
};