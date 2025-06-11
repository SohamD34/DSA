// https://leetcode.com/problems/gas-station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int n = gas.size();

        for(int i=0; i<n; i++){

            int start = i;
            int next = (i+1)%n;
            int count = 0;

            int curr_gas = 0;

            while(curr_gas + gas[start] >= cost[start] && count != n){

                count += 1;
                curr_gas = curr_gas + gas[start] - cost[start];
                start = (start + 1)%n;
                next = (next + 1)%n;
            }

            if(count == n){
                return i;
            }
        }
        return -1;
     
    }
};