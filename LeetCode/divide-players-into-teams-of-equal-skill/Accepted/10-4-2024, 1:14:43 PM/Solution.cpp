// https://leetcode.com/problems/divide-players-into-teams-of-equal-skill

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        vector<vector<int>> teams;

        sort(skill.begin(), skill.end());

        int front = 0;
        int back = skill.size()-1;

        long long sum = skill[front] + skill[back];
        long long total = skill[front] * skill[back];

        front++;
        back--;

        while (front <= back){

            if(skill[front] + skill[back] != sum){
                return -1;
            }
            total += skill[front]*skill[back];
            front++;
            back--;
        }

        return total;
    }
};