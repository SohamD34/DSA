// https://leetcode.com/problems/triangle

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int layers = triangle.size();

	    vector<vector<int>> dp;
	    
	    for(int i=1; i<=layers; i++){
	        vector<int>dplayer;
	        for(int j=1; j<=i; j++){
	            dplayer.push_back(0);
	        }
	        dp.push_back(dplayer);
	    }
	    
	    
	    dp[0][0] = triangle[0][0];
	    
	    for(int i=1; i<layers; i++){
	        dp[i][0] = dp[i-1][0] + triangle[i][0];
	        dp[i][i] = dp[i-1][i-1] + triangle[i][i];
	    }
	    
	    for(int i=1; i<layers; i++){
	        for(int j=1; j<i; j++){
	            dp[i][j] = triangle[i][j] + min(dp[i-1][j], dp[i-1][j-1]);
	        }
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