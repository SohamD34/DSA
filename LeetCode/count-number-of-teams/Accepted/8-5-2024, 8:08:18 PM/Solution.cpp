// https://leetcode.com/problems/count-number-of-teams

class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int count = 0;
        int n = rating.size();

        // Increasing sequence

        for(int i=0; i<n-2; i++){
            int first = rating[i];

            for(int j=i+1; j<n-1; j++){

                if(rating[j] > first){
                    int second = rating[j];

                    for(int k=j+1; k<n; k++){
                        int third = rating[k];

                        if(third > second){
                            count += 1;
                        }
                    }
                }
            }
        }

        // Decreasing

        for(int i=0; i<n-2; i++){
            int first = rating[i];

            for(int j=i+1; j<n-1; j++){

                if(rating[j] < first){
                    int second = rating[j];

                    for(int k=j+1; k<n; k++){
                        int third = rating[k];

                        if(third < second){
                            count += 1;
                        }
                    }
                }
            }
        }

        return count;
    }
};