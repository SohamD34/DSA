// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int val = 0;
        for(int i=0; i<operations.size(); i++ ){

            string op = operations[i];
            if((op == "--X") || (op == "X--")){
                val += (-1);
            }
            if((op == "++X") || (op == "X++")){
                val += (+1);
            }
        }
        return val;
    }
};