// https://leetcode.com/problems/sum-of-all-subset-xor-totals

class Solution {
public:
    void subsetsUtil(vector<int>& A, vector<vector<int> >& res,vector<int>& subset, int index){
        res.push_back(subset);

        for (int i = index; i < A.size(); i++) {

            subset.push_back(A[i]);
            subsetsUtil(A, res, subset, i + 1);
            subset.pop_back();
        }
        return;
    }

    vector<vector<int> > subsets(vector<int>& A){
        vector<int> subset;
        vector<vector<int> > res;

        int index = 0;
        subsetsUtil(A, res, subset, index);
    
        return res;
    }

    int subsetXORSum(vector<int>& nums) {
        
        int xor_sum = 0;
        int n = nums.size();

        vector<vector<int>> res = subsets(nums);

        for(auto i:res){
            int xor_val = 0;
            for(auto j:i){
                xor_val^=j;
            }
            xor_sum += xor_val;
        }
        return xor_sum;
    }
};