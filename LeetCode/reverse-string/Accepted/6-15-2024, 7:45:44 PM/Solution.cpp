// https://leetcode.com/problems/reverse-string

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void reverseString(vector<char>& s) {

        char front;
        int n = s.size();

        for(int i=0; i<n/2; i++){
            front = s[i];
            s[i] = s[n - i -1];
            s[n - i -1] = front;
        }
    }
};