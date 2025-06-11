// https://leetcode.com/problems/triangle

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int layers = triangle.size();

        // Initialise a triangular DP
	    
        vector<vector<int>> dp;
	    
	    for(int i=1; i<=layers; i++){
	        vector<int>dplayer;
	        for(int j=0; j<i; j++){
	            dplayer.push_back(0);
	        }
	        dp.push_back(dplayer);
	    }
	    
        // First value of DP  = top of triangle
	    
	    dp[0][0] = triangle[0][0];
	    
        /* 
        Sum at a node -- 3 cases
        1) Leftmost --> 1 choice --> previous leftmost 
        2) Middle elements --> 2 choices (left or right)
        3) Rightmost --> 1 choice ---> previous rightmost
	    */

	    for(int i=1; i<layers; i++){
            
            // Leftmost
            dp[i][0] = dp[i-1][0] + triangle[i][0];
	        
            // Middle
	        for(int j=1; j<i; j++){
	            dp[i][j] = triangle[i][j] + min(dp[i-1][j], dp[i-1][j-1]);
	        }

            // Rightmost
            dp[i][i] = dp[i-1][i-1] + triangle[i][i];
	    }
	    
	    int min_sum = dp[layers-1][0];
	    for(int i=0; i<layers;i++){
	        if(dp[layers-1][i] < min_sum){
	            min_sum = dp[layers-1][i];
	        }
	    }
	    

        return min_sum;
    }
};