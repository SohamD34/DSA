// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int get_map(char a){
        if(a=='I'){ return 1; }
        if(a=='V'){ return 5; }
        if(a=='X'){ return 10; }
        if(a=='L'){ return 50; }
        if(a=='C'){ return 100; }
        if(a=='D'){ return 500; }
        if(a=='M'){ return 1000; }
    }
    int romanToInt(string s) {
        int sum = 0;
        int i = 0;

        while(i<size(s)){
            
            if(get_map(s[i]) > get_map(s[i+1])){
                sum += get_map(s[i]);
                i+=1;
            }
            else{
                sum += (get_map(s[i+1]) - get_map(s[i]));
                i+=2;
            }

        }
        return sum;
    }
};