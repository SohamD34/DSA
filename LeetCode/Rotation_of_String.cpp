class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length()){
            return false;
        }

        bool rotated = false;
        int n = s.length();
        int mark = 0;

        for(int i=0; i<n; i++){

            if(s[i] == goal[0]){
                mark = i;
                string rotated = s.substr(i, n-i) + s.substr(0, i);

                if(rotated == goal){
                    return true;
                }
            }
        }
        return false;
    }
};