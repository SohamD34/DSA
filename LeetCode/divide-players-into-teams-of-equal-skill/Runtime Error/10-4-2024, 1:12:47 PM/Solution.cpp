// https://leetcode.com/problems/divide-players-into-teams-of-equal-skill

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        vector<vector<int>> teams;

        sort(skill.begin(), skill.end());

        int front = 0;
        int back = skill.size()-1;

        int sum = skill[front] + skill[back];
        int total = skill[front] * skill[back];

        front++;
        back--;

        while (front <= back){
            int s = skill[front] + skill[back];

            if(s != sum){
                return -1;
            }
            else{
                total += skill[front]*skill[back];
            }
            front++;
            back--;
        }

        return total;
    }
};