// https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> op;

        for (int i=digits.size()-1; i>=0;i--){

            int sum = digits[i] + carry;
            cout<<sum<<endl;
            if (sum < 10){
                op.insert(op.begin(),sum);
                carry = 0;
            }
            else{
                op.insert(op.begin(),sum - 10);
                carry = 1;
            }
        }

        if(carry == 1){
            op.insert(op.begin(),1);
        }
        return op;
    }
};