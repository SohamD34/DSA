// https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length

class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        
        int max_vowels = 0;
        int curr_vowels = 0;

        int start = 0;
        int end = k-1;

        for(int i=start; i<=end; i++){
            if(isVowel(s[i])){
                curr_vowels += 1;
                max_vowels += 1;
            }
        }

        while(end != s.length()-1){

            if(isVowel(s[start])){
                curr_vowels -= 1;
            }
            start += 1;
            end += 1;
            if(isVowel(s[end])){
                curr_vowels += 1;
            }

            max_vowels = max(max_vowels, curr_vowels);
        }

        return max_vowels;
    }
};